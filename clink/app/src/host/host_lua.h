// Copyright (c) 2016 Martin Ridgers
// License: http://opensource.org/licenses/MIT

#pragma once

#include <core/str.h>
#include <lua/lua_match_generator.h>
#include <lua/lua_word_classifier.h>
#include <lua/lua_input_idle.h>
#include <lua/lua_state.h>
#include <functional>

//------------------------------------------------------------------------------
class host_lua
{
public:
                        host_lua();
                        operator lua_state& ();
                        operator match_generator& ();
                        operator word_classifier& ();
                        operator input_idle* ();
    void                load_scripts();
    bool                is_script_path_changed() const;

    bool                send_event(const char* event_name, int nargs=0);
    bool                send_event_cancelable(const char* event_name, int nargs=0);
    bool                send_event_cancelable_string_inout(const char* event_name, const char* string, str_base& out);
    bool                send_oncommand_event(line_state& line, const char* command, bool quoted, recognition recog, const char* file);

    bool                call_lua_rl_global_function(const char* func_name, line_state* line);
    void                call_lua_filter_matches(char** matches, int completion_type, int filename_completion_desired);

#ifdef DEBUG
    void                force_gc();
#endif

private:
    bool                load_scripts(const char* paths);
    void                load_script(const char* path, unsigned& num_loaded, unsigned& num_failed);
    lua_state           m_state;
    lua_match_generator m_generator;
    lua_word_classifier m_classifier;
    lua_input_idle      m_idle;
    str<>               m_prev_script_path;
};

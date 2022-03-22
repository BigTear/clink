### 介绍

Clink 将原生 Windows 命令提示符 cmd.exe 与 GNU Readline 库强大的命令行编辑功能相结合，提供丰富的补全、历史和行编辑功能。Readline 以其在 Unix shell Bash 中的使用而闻名，它是 Mac OS X 和许多 Linux 发行版的标准 shell。

有关详细信息，请参阅 [Clink 文档](https://chrisant996.github.io/clink/clink.html)。

### 下载

可从 [releases](https://github.com/chrisant996/clink/releases) 页面下载。

查看 [issues](https://github.com/chrisant996/clink/issues) 页面了解有哪些 issue 需要解决或者提出新的 issues 。

### 截屏演示

![image](https://chrisant996.github.io/clink/images/clink_demo.png)

### Features

以下是 Clink 提供的一些亮点功能:

- 与 Bash 相同的行编辑 （来自 [GNU Readline 库](https://tiswww.case.edu/php/chet/readline/rltop.html) 的 8.1 版本）.
- 会话之间的命令历史持久保存。
- 上下文感知自动补全；
  - 可执行文件 （和 cmd 别名）
  - 目录命令
  - 环境变量
- 彩色命令名
- 来自历史和完成的自动建议。
- 新的键盘快捷键；
  - 交互式补全列表 （<kbd>Ctrl</kbd>+<kbd>Space</kbd>）
  - 增量历史搜索 （<kbd>Ctrl</kbd>+<kbd>R</kbd> 和 <kbd>Ctrl</kbd>+<kbd>S</kbd>）
  - 强大的补全功能 （<kbd>Tab</kbd>）
  - 撤销 （<kbd>Ctrl</kbd>+<kbd>Z</kbd>）
  - 环境变量扩展 （<kbd>Ctrl</kbd>+<kbd>Alt</kbd>+<kbd>E</kbd>）
  - Doskey 别名扩展 （<kbd>Ctrl</kbd>+<kbd>Alt</kbd>+<kbd>F</kbd>）
  - 滚动屏幕缓冲区 （<kbd>Alt</kbd>+<kbd>Up</kbd>, 其他）
  - <kbd>Shift</kbd>+方向键选择文本，输入文字替换选区文字等
  - （按 <kbd>Alt</kbd>+<kbd>H</kbd> 了解更多...）
- 目录快捷方式：
  - 键入目录名称后跟路径分隔符是 `cd /d` 到该目录的快捷方式
  - 输入 `..` 或者 `...` 是 `cd ..` 或 `cd ..\..` 的快捷方式。 （每个额外的 `.` 加入一个 `\..`）
  - 输入 `-` 或者 `cd -` 更改到上一个当前工作目录
- 使用 Lua 编写自动建议脚本
- 使用 Lua 编写自动完成脚本
- 使用 Lua 编写键绑定的脚本
- 彩色和可编写脚本的命令提示符
- 自动回答 “终止批处理？” 提示

默认情况下 Clink 绑定 <kbd>Alt</kbd>+<kbd>H</kbd> 显示当前的键绑定。 更多功能也可以在 GNU [Readline](https://tiswww.cwru.edu/php/chet/readline/readline.html) 中找到。

### 用法

有几种方法可以启动 Clink：

1. 如果你安装了自动运行，只需启动 `cmd.exe` ，运行 `clink autorun --help` 以获取更多信息
2. 要手动启动，请从“开始”菜单（或位于安装目录中的 clink.bat）运行 Clink 快捷方式
3. 要建立 Clink 到现有的 `cmd.exe` 进程，请使用 `<install_dir>\clink.exe injection`

您可以立即使用 Clink，而无需进行任何配置：

- 可供搜索的 [命令行历史](#saved-command-history) 将在会话之间保存。
- <kbd>Tab</kbd> 和 <kbd>Ctrl</kbd>+<kbd>Space</kbd> 键将以两种不同的方式完成匹配。
- 按 <kbd>Alt</kbd>+<kbd>H</kbd> 查看当前键绑定的列表。
- 按 <kbd>Ctrl</kbd>+<kbd>Shift</kbd>+<kbd>/</kbd> 后跟另一个键以查看该键绑定了什么命令。

查看 [快速上手](https://chrisant996.github.io/clink/clink.html#getting-started) 有关 Clink 入门的信息。

### 从 Clink v0.4.9 升级

新的 Clink 尝试尽可能向后兼容 Clink v0.4.9。 但是，在某些情况下，升级可能需要一些配置工作。 更多细节可以在[Clink 文档](https://chrisant996.github.io/clink/clink.html) 看到。

### Clink 拓展

Clink 可以通过其 Lua API 进行扩展，该 API 允许轻松创建上下文相关匹配生成器、提示过滤等。 更多细节可以在 [Clink 文档](https://chrisant996.github.io/clink/clink.html) 看到。


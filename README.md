# Todo

Todo is - as the name suppose - a todo list. A simple and stupid todo list.

# Install

Arch Linux or Arch-based Linux distributions users can install Todo via the AUR
package `todo-stupid-git`.

# Use

To run the first time and create the `~/.local/share/todo.txt` file, you should
create a task as you wish.

`$ todo -c TASK` will create the task `TASK`  
`$ todo` or `todo -l` will list your tasks  
`$ todo -d TASK` will delete the task with the number TASK. Task numbers are
defined by their age (1 is the oldest, 2 is the second oldest, etc)  

Any other arg pattern will output the help.

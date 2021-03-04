clear
echo "\nNorminette:\n"
norminette -R CheckForbiddenSourceHeader ex*/ft*

gcc -Wall -Wextra -Werror ex*/ft* main.c -o exec
./exec

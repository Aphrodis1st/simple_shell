#include "shell.h"

/**
 * cmd_rid - a function that reads a command
 * Return: a string
 */
char *cmd_rid(void)
{
        char *len = NULL;
        size_t length = 0;
        ssize_t z;

        if (isatty(STDIN_FILENO))
        {
                write(STDOUT_FILENO, "$ ", 2);
        }
        z = getline(&len, &length, stdin);

        if (z == -1)
        {
                free(len);
                return (NULL);
        }
        return (len);
}


#include "shell.h"

/**
 * exct - a function that executes a command
 * @cmdi: a command to be executed
 * @av: array of arguments
 * @index: an integer
 * Return: returns an int
 */
int exct(char **cmdi, char **av, int index)
{
        char *cmad_fill;
        pid_t kid_pid;
        int status;

        cmad_fill = _pget(cmdi[0]);
        if (!cmad_fill)
        {
                errprt(av[0], cmdi[0], index);
                array_freed(cmdi);

                return (127);
        }

        kid_pid = fork();

        if (kid_pid == 0)
        {
                if (execve(cmad_fill, cmdi, environ) == -1)
                {
                        free(cmad_fill), cmd_fll = NULL;
                        array_freed(cmdi);
                }
        }
        else
        {
                waitpid(kid_pid, &status, 0);
                arrey_flid(cmdi);
                free(cmad_fill), cmad_fill = NULL;
        }
        return (WEXITSTATUS(status));
}

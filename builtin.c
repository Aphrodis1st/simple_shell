#include "shell.h"

/**
 * built - built-in cmds
 * @cmadi: ptr par
 *
 * Return: an int
 */
int built(char *cmadi)
{
        char *builtn[] = {
                "exit", "env", "setenv", "cd", NULL
        };      /*built-in cmds*/
        int x;

        for (x = 0; builtn[x]; x++)
        {
                if (scomp(cmadi, builtn[x]) == 0)
                        return (1);
        }
        return (0);
}

/**
 * built_dl - a func that handles builtin cmds
 * @cmadi: cmadi to be passed
 * @av: array of args
 * @status: an integer
 * @index: an index
 */
void built_dl(char **cmadi, char **av, int *status, int index)
{
        (void) av;
        (void)index;

        if (scomp(cmadi[0], "exit") == 0)
                exit_func(cmadi, av, status, index);
        else if (scomp(cmadi[0], "env") == 0)
                environ_prt(cmadi, status);
}

/**
 * exit_func - a function that handles exit cmadi
 * @cmadi: cmadi to be passed
 * @av: an array of args
 * @status: an integer
 * @index: an index
 */
void ext_fuc(char **cmadi, char **av, int *status, int index)
{
        int vlue_x = (*status);
        char *idex_num, message[] = ": exit: Illegal number: ";

        if (cmadi[1])
        {
                if (plus_num(cmadi[1]))
                {
                        vlue_x = _atoi(cmadi[1]);
                }
                else
                {
                        idex_num = _itoa(index);
                        write(STDERR_FILENO, av[0], slength(av[0]));/* prints out */
                        write(STDERR_FILENO, ": ", 2); /* prints out a delim */
                        write(STDERR_FILENO, idex_num, slength(idex_num));
                        write(STDERR_FILENO, message, slength(message));
                        write(STDERR_FILENO, cmadi[1], slength(cmadi[1]));
                        write(STDERR_FILENO, "\n", 1);
                        free(idex_num);
                        arrey_flid(cmadi);
                        (*status) = 2;
                        return;
                }
        }

        arrey_flid(cmadi);
        exit(vlue_x);
}

/**
 * envrn_prt - prints environmets
 * @cmadi: db pointer str
 * @status: an integer
 */
void envrn_prt(char **cmadi, int *status) /* a function that prints env */
{
        int y;

        for (y = 0; environ[y]; y++)
        {
                write(STDOUT_FILENO, environ[y], slength(environ[y])); /* printing out */
                write(STDOUT_FILENO, "\n", 1); /* printing out */
        }
        arrey_flid(cmadi);
        (*status) = 0; /* successful */
}

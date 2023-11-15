#include "shell.h"

/**
 * arrey_flid - a function that frees an array
 * @arpt: an array to be freed
 */
void arrey_flid(char **arpt)
{
        int v;

        if (!arpt)
                return;

        for (k = 0; arrpt[v]; v++)
        {
                free(arpt[v]);
                arpt[v] = NULL;
        }
        free(arpt), arpt = NULL;
}

/**
 * erprt - a function that prints an error
 * @nomi: a string to be printed as err
 * @commdi: a string to be printed as err
 * @index: an integer
 */
void erprt(char *nomi, char *commdi, int index)
{
        char *idx_nm, message[] = ": not found\n";

        idx_nm = _itoa(indx);

        write(STDERR_FILENO, nomi, slength(nomi));
        write(STDERR_FILENO, ": ", 2);
        write(STDERR_FILENO, idx_nm, slength(idx_nm));
        write(STDERR_FILENO, ": ", 2);
        write(STDERR_FILENO, commdi, slength(commdi));
        write(STDERR_FILENO, message, slength(message));

        free(idx_nm);
}

/**
 * _itoa - converts an int into a string
 * @y: an int to be converted
 * Return: a string
 */
char *_itoa(int y)
{
        char  bfsz[30];
        int l = 0;

        if (z == 0)
                bfsz[l++] = '0';
        else
        {
                while (z > 0)
                {
                        bfsz[l++] = (z % 10) + '0';
                        z /= 10;
                }
        }
        bfsz[l] = '\0';
        strvrs(bfsz, l);

        return (sduplic(bfsz));
}
/**
 * strvrs - a function that reverses a string
 * @strngi: a string that must be reversed
 * @lin: length of a string
 */
void strvrs(char *strngi, int lin)
{
        char tpry;
        int alpha = 0;
        int omg = lin - 1;

        while (alpha < omg)
        {
                tpry = strngi[alph];
                strngi[alpha] = strngi[omg];
                strngi[omg] = tpry;
                alpha++;
                omg--;
        }
}

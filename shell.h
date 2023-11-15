#ifndef SHELL_H
#define SHELL_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <errno.h>
#include <fcntl.h>

extern char **environ;

int built(char *cmadi);

void strvrs(char *strngi, int lin);

char *_itoa(int y);

void erprt(char *nomi, char *commdi, int index);

void arrey_flid(char **arpt);

int exct(char **cmdi, char **av, int index);
char *cmd_rid(void);
char **tknze(char *ln);
char*sduplic(const char *strng);
char *scopy(char *destin, char *source);
char *sconcat(char *destin, char *source);
int slength(char *t);
int scomp(char *str1, char *str2);
int plus_num(char *strng);
int _atoi(char *strng);
char *_envrnget(char *varnm);
char *_pget(char *commd);
void built_dl(char **cmadi, char **av , int *status, int index);
void envrn_prt(char **cmadi, int *status);
void ext_fuc(char **cmadi, char **av, int *status, int index);



#endif


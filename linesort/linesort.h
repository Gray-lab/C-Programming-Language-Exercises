#include <stdio.h>
#include <string.h>

#define MAXLINES 5000

int readlines(char *lineptr[], int nlines);
void writelines(char *lineptr[], int nlines);

void qsort(char *lineptr[], int left, int right);

#define MAXLEN 1000 /* max length of an input line*/
int getline(char*, int);
char *alloc(int);
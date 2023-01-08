#include <stdio.h>

/* read a line into s, return length */
int getline(char s[], int lim) {
    int c, i;
    c = getchar();
    for (i = 0; i < lim -1 && c != EOF && c != '\n'; ++i) {
        s[i] = c;
        c = getchar();
    }
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}
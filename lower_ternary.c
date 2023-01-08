#include <stdio.h>
#include <string.h>

#define MAXLINE 1000

void lower_ternary(char *);

int main(void)
{
    char s[MAXLINE];
    lower_ternary(s);
    printf("\n%s\n%d\n", s, (int)strlen(s));

    return 0;
}

void lower_ternary(char *s)
{
    char c;
    int i;
    for (i = 0; (c = getchar()) != EOF; ++i)
    {
        s[i] = (c >= 'A' && c <= 'Z') ? c + ('a' - 'A') : c;
    }
    s[i] = '\0';
}
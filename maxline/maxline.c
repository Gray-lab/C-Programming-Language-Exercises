#include <stdio.h>
#define MAXLINE 1000
int get_line(char line[], int maxline);
void copy(char to[], char from[]);

int count = 1;

int main()
{
    int len;
    int max;
    
    char line[MAXLINE];
    char longest[MAXLINE];

    // printf("Enter lines to find the longest line. Press Ctrl+D to exit.\n%d. ", count);

    max = 0;
    while ((len = get_line(line, MAXLINE)) > 0) {
        if (len > max)
        {
            max = len;
            copy(longest, line);
        }
    }

    if (max > 0) // there was a line
        printf("%s\n", longest);

    return 0;
}

int get_line(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n')
    {
        // printf("%d. ", ++count);
        s[i] = c;
        ++i;
    }
    // add line terminator
    s[i] = '\0';
    return i;
}

void copy(char to[], char from[])
{
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}
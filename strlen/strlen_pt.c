#include <stdio.h>

int strlen_example(char *s);

int main(void)
{
    char *test_str = "This is a string of length 30.";
    printf("\"%s\" is %d characters long.", test_str, strlen_example(test_str));
    return 0;
}

int strlen_example(char *s)
{
    int n;

    for (n = 0; *s != '\0'; s++)
    { /* increment s, which is this functions copy of the string pointer. *s gives the value at s.*/
        n++;
    }
    return n;
}
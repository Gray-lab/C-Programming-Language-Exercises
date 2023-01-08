#include <stdio.h>

int main(void) {
    const char test_const[] = "This is a const string\n";
    char test[] = "This is a string\n";
    printf("%s", test);
    test[2] = 'g';
    test_const[2] = 'g';
}

void not_changing(const char an_array[])
{
    an_array[2] = 'g';
}
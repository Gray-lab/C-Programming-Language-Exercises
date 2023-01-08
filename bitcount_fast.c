#include <stdio.h>
#include <limits.h>

int bitcount(unsigned int);
void print_bin(unsigned int);

int main() 
{
    int input, result;

    printf("Enter an integer: ");
    scanf("%d", &input);

    result = bitcount(input);
    printf("%d has %d 1s\nThe binary of the input was: ", input, result);
    print_bin(input);
    putchar('\n');
    return 0;
}

int bitcount(unsigned n) 
{
    int count = 0;

    while (n != 0) {
        ++count;
        n &= n - 1;
    }
    return count;
}

void print_bin(unsigned int integer)
{
    int i = CHAR_BIT * sizeof integer; /* however many bits are in an integer */
    while(i--) {
        putchar('0' + ((integer >> i) & 1)); 
    }
}
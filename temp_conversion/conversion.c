#include <stdio.h>

int main()
{
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    // Does this break it?
    lower = 100;
    // No, int literals are assigned by value

    while (fahr <= upper)
    {
        celsius = 5 * (fahr - 32) / 9;
        printf("%3d %6d\n", fahr, celsius);
        fahr = fahr + step;
    }
}
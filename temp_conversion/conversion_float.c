#include <stdio.h>

int main()
{
    float fahr, celsius;
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
        celsius = 5.0 / 9.0 * (fahr - 32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}
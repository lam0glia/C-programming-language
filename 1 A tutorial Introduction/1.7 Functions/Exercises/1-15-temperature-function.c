#include <stdio.h>

float convert(int);

int main()
{
    int fahr, upper, step;

    upper = 300;
    step = 20;

    for (fahr = 0; fahr <= upper; fahr = fahr + step)
        printf("%3d\t%3.2f\n", fahr, convert(fahr));
}

float convert(int fahr)
{
    return (5.0 / 9.0) * (fahr - 32.0);
}
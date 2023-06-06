#include <stdio.h>

int main()
{
    float celsius, fahr;
    int upper, step;

    celsius = 0;
    upper = 100;
    step = 10;

    while (celsius <= upper)
    {
        fahr = (celsius * 1.8) + 32;
        printf("%3.0f\t%6.1f\n", celsius, fahr);
        celsius += step;
    }
}
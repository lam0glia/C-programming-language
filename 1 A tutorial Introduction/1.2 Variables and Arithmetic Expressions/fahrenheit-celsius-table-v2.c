#include <stdio.h>

/* if an arithmetic opertator has one floating-point operand and one
    integer operand, the integer will be converted to floating point
    before the operation is done */
int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower; // lower value is converted to float before the operation is done
    while (fahr <= upper) // upper value is converted to
    {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
    return 0;
}
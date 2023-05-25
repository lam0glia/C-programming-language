#include <stdio.h>

/*
    this declaration is called *function prototype*.
    parameter names are optional, so it can be ommited:
        int power(int, int);
*/
int power(int m, int n);

/* C has no exponential operator, but library standard contains pow(x, y) */
int main()
{
    int i;

    for (i = 0; i < 10; i++)
        printf("%d %d %d\n", i, power(2, i), power(-3, i));

    return 0;
}

/*
    an error occurs when its definition dont agree with its prototype
*/
int power(int base, int n)
{
    int i, p;

    p = 1;
    for (i = 1; i <= n; i++)
        p = p * base;

    return p;
}
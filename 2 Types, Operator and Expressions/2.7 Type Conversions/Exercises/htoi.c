#include <stdio.h>
#include <math.h>

int htoi(char[]);

int main()
{
    printf("%d\n", htoi("BaF"));
}

int htoi(char s[])
{
    int i, n, value, sub;

    value = n = 0;
    for (i = 0; (s[i] >= '0' && s[i] <= '9') || (s[i] >= 'a' && s[i] <= 'f') || (s[i] >= 'A' && s[i] <= 'F'); i++)
        ;

    for (--i; i >= 0; i--)
    {
        if (s[i] <= '9')
        {
            sub = '0';
        }
        else if (s[i] <= 'F')
        {
            sub = 'A' - 10;
        }
        else
        {
            sub = 'a' - 10;
        }

        value = value + ((s[i] - sub) * pow(16, n++));
    }

    return value;
}
#include <stdio.h>
#include <string.h>
#include <limits.h>

void itoa(long, char[]);
void reverse(char[]);

int main()
{
    char out[20];
    itoa(LONG_MIN, out);
    printf("%s\n", out);
}

void itoa(long n, char s[])
{
    int i;
    long sign;

    if ((sign = n) < 0)
    {
        /*
            the result of -n when the number is the largest negative number
            exceeds the maximum value tha n can represent.

            EXAMPLE IN A 8-BIT MACHINE
            -128 in bits: 100000000
            127 in bits: 011111111
        */
        n = (n == LONG_MIN) ? LONG_MAX : -n;
    }

    i = 0;
    do
    {
        s[i++] = n % 10 + '0';
    } while ((n /= 10) > 0);

    if (sign < 0)
    {
        if (sign == LONG_MIN)
        {
            s[0] = s[0] + 1;
        }

        s[i++] = '-';
    }

    s[i] = '\0';

    reverse(s);
}

void reverse(char s[])
{
    int i, j;
    char temp;

    for (i = 0, j = strlen(s) - 1; i < j; i++, j--)
    {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}
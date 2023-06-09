#include <stdio.h>
#include <limits.h>
#include <string.h>

#define MAX 30

void itoa(long, char[], int);
void reverse(char[]);

int main()
{
    char out[MAX];

    itoa(LONG_MIN, out, 59);
    printf("%s", out);
}

void itoa(long n, char s[], int w)
{
    long sign;

    if ((sign = n) < 0)
    {
        n = (n == LONG_MIN ? LONG_MAX : -n);
    }

    int i = 0;
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

    while (i < w && i < MAX - 1)
    {
        s[i++] = '*';
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
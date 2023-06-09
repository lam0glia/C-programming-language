#include <string.h>

void reverse(char s[])
{
    int i, j, temp;

    for (i = 0, j = strlen(s) - 1; i < j; i++, j--)
    {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}

void terriblereverse(char s[])
{
    int i, j, temp;

    for (i = 0, j = strlen(s) - 1; i < j; i++, j--)
        temp = s[i], s[i] = s[j], s[j] = temp;
}
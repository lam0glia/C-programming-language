#include <stdio.h>

int lim = 10;

int main()
{
    int c;

    for (int i = 0; i < lim - 1; ++i)
    {
        if ((c = getchar()) == '\n')
        {
            break;
        }
        if (c == EOF)
        {
            break;
        }
    }
}
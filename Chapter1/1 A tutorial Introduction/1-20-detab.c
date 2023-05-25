#include <stdio.h>

int spaces = 4;

int nexttabstop(int, int);

int main()
{
    int c, i;

    for (i = 1; (c = getchar()) != '\n' && c != EOF; i++)
    {
        if (c == '\t')
        {
            int s;

            /* it should be symbolic parameter, because its value can be changed
                and because the function becomes generic */
            i = i + (s = nexttabstop(i, spaces));

            while (s >= 0)
            {
                putchar(' ');
                s--;
            }
        }
        else
            putchar(c);
    }
}

int nexttabstop(int pos, int col)
{
    return ((pos / col + 1) * col) - pos;
}
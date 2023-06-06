#include <stdio.h>

int spaces = 4;

int nexttabstop(int, int);

int main()
{
    int c, i, blanks;

    i = 1;
    blanks = 0;
    while ((c = getchar()) != '\n' && c != EOF)
    {
        if (c == ' ')
        {
            blanks++;
        }
        else if (c == '\t')
        {
            blanks = blanks + nexttabstop(i, spaces) + 1;
        }
        else
        {
            if (blanks > 0)
            {
                int s;

                /* it gives preferences to tab before spaces */
                while ((s = nexttabstop(i, spaces) + 1) <= blanks)
                {
                    i = i + s;
                    blanks = blanks - s;
                    putchar('*');
                }

                i = i + blanks;

                while (blanks-- > 0)
                    putchar('-');
            }

            blanks = 0;
            putchar(c);
            i++;
        }
    }
}

int nexttabstop(int pos, int col)
{
    return col - (pos % col);
}
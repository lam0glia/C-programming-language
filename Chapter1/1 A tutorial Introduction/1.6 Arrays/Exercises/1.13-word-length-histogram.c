#include <stdio.h>

int main()
{
    int c, lmax, lcounter, i;
    int wl[51];

    for (i = 0; i < 51; i++)
        wl[i] = 0;

    lmax = lcounter = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n' || c == '\t')
        {
            if (lcounter > 0)
            {
                if (lcounter > lmax)
                    lmax = lcounter;

                ++wl[lcounter];
                lcounter = 0;
            }
        }
        else
            ++lcounter;
    }

    if (lcounter > 0)
    {
        ++wl[lcounter];

        if (lcounter > lmax)
            lmax = lcounter;
    }

    for (i = 1; i <= lmax; i++)
        printf("\nLength %d: %d words", i, wl[i]);

    for (i = lmax; i >= 1; i--)
    {
        printf("\n%2d | ", i);
        for (int b = 0; b < wl[i]; b++)
        {
            putchar('\\');
        }
    }
}
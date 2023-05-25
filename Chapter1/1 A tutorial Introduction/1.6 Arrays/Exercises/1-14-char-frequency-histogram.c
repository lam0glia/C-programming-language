#include <stdio.h>

#define MAX_CHAR 127

int main()
{
    int c, i;
    int fc[MAX_CHAR + 1];

    for (i = 0; i <= MAX_CHAR; i++)
        fc[i] = 0;

    while ((c = getchar()) != EOF)
    {
        if (c < MAX_CHAR)
            ++fc[c];
    }

    for (i = MAX_CHAR; i >= 0; i--)
    {
        if (fc[i] > 0)
        {
            printf("\n%c | ", i);
            for (c = 0; c < fc[i]; c++)
                putchar('\\');
        }
    }
}
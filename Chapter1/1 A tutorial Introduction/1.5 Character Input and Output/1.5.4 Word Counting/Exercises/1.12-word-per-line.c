#include <stdio.h>

#define TRUE 1
#define FALSE 0

int main()
{
    int in, space;

    in = space = 0;
    while ((in = getchar()) != EOF)
    {
        if (in == '\n')
            continue;
        else if (in == '\t' || in == ' ')
        {
            space = TRUE;
            continue;
        }
        else if (space == TRUE)
        {
            putchar('\n');
            space = FALSE;
        }

        putchar(in);
    }
    return 0;
}
#include <stdio.h>
#include <stdbool.h>

int main()
{
    int c;
    bool print;

    print = true;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            if (!print)
            {
                continue;
            }

            print = false;
        }
        else
        {
            print = true;
        }

        putchar(c);
    }

    return 0;
}
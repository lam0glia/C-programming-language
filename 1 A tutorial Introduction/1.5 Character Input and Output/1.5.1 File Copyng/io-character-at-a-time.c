#include <stdio.h> // EOF is defined inside it

main()
{
    int c;

    c = getchar();
    while (c != EOF)
    {
        putchar(c);
        c = getchar();
    }
}
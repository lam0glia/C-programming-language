#include <stdio.h>

int main()
{
    int c, blanks, tabs, nl;

    blanks = 0;
    tabs = 0;
    nl = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
            ++blanks;
        else if (c == '\t')
            ++tabs;
        else if (c == '\n')
            ++nl;
    }

    printf("Blanks: %d\nTabs: %d\nNew lines: %d\n", blanks, tabs, nl);
}
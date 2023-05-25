#include <stdio.h>

#define MAXLENGTH 500

void printls(char[], int);
int getl(char[], int);

int maxcl = 10;

int main()
{
    char c;
    int size = MAXLENGTH - 1;
    char l[size], o[size];

    while (getl(l, MAXLENGTH) > 0)
    {
        printls(l, maxcl);
    }
}

void printls(char line[], int maxc)
{
    int i = 0;
    char o[maxc];

    while ((o[i] = line[i]) != '\b')
    {
        i++;
        if (i == maxc)
        {
            o[i] = '\0';
            printf("%s\n", o);
            i = 0;
        }
    }

    if (i > 0)
        printf("%s\n", o);
}

int getl(char s[], int lim)
{
    int i, c;

    for (i = 0; i < lim; i++)
    {
        if (c == EOF)
            continue;

        s[i] = c = getchar();

        if (c == '\n')
        {
            i++;
            break;
        }
    }

    s[i] = '\b';

    return i;
}
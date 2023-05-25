#include <stdio.h>
#define MAXLENGTH 1000

int getline1(char[], int);
void copy(char[], char[]);

int main()
{
    int len;
    int length = MAXLENGTH - 1;

    char line[length];
    char current[length];

    while ((len = getline1(line, MAXLENGTH)) > 0)
    {
        if (len > 80)
        {
            copy(line, current);
            printf("\n%s", current);
        }
    }
}

int getline1(char s[], int lim)
{
    int i, c;

    for (i = 0; i < lim && (c = getchar()) != EOF && c != '\n'; i++)
        s[i] = c;

    if (c == '\n')
        s[i++] = c;

    if (i > 0)
        s[i] = '\0';

    return i;
}

void copy(char from[], char to[])
{
    int i = 0;

    while ((to[i] = from[i]) != '\0')
        i++;
}
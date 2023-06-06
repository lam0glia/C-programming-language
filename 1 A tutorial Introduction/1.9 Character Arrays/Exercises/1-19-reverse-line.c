#include <stdio.h>

#define MAXLENGTH 1000

int getline1(char[], int);
void reverse(char[], char[], int);

int main()
{
    int length;
    int size = MAXLENGTH - 1;
    char l[size], o[size];

    while ((length = getline1(l, MAXLENGTH)) > 0)
    {
        reverse(l, o, length);

        printf("%s\n", o);
    }
}

int getline1(char s[], int lim)
{
    int i;

    for (i = 0; i < lim; i++)
    {
        if ((s[i] = getchar()) == '\n')
            break;
        else if (s[i] == EOF)
        {
            if (i != 0)
                s[i] = '\n';

            break;
        }
    }

    return i;
}

void reverse(char from[], char to[], int length)
{
    for (int i = length; i >= 0; i--)
        to[length - i] = from[i - 1];

    to[length] = '\0';
}
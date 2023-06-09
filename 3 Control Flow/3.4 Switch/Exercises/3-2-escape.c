#include <stdio.h>

#define MAX 200

void escape(char[], char[]);
void scan(char[]);

int main()
{
    char in[MAX], out[MAX];

    scan(in);

    escape(out, in);

    printf("\n%s", out);
}

void escape(char s[], char t[])
{
    int i, n;

    for (i = n = 0; t[i] != '\0'; i++)
    {
        switch (t[i])
        {
        case '\n':
            s[n++] = '\\';
            s[n] = 'n';
            break;
        case '\t':
            s[n++] = '\\';
            s[n] = 't';
            break;
        default:
            s[n] = t[i];
            break;
        }

        n++;
    }
}

void scan(char in[])
{
    int i;

    for (i = 0; i < MAX - 1 && (in[i] = getchar()) != EOF; i++)
        ;

    in[i] = '\0';
}
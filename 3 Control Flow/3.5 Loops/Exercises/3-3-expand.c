#include <stdio.h>
#include <ctype.h>

#define MAX 200

void expand(char[], char[]);

int main()
{
    int i;
    char in[MAX], out[MAX];
    char c;

    for (i = 0; i < MAX - 1 && (c = getchar()) != EOF; i++)
    {
        in[i] = c;
    }

    in[i] = '\0';

    expand(in, out);

    printf("\n%s\n", out);
}

void expand(char s1[], char s2[])
{
    int i, j;

    for (i = j = 0; s1[i] != '\0'; i++)
    {
        if (s1[i + 1] == '-' && isalnum(s1[i + 2]))
        {
            do
            {
                for (char c = s1[i]; c <= s1[i + 2]; c++)
                {
                    s2[j++] = c;
                }

                i += 2;
            } while (s1[i + 1] == '-' && isalnum(s1[i + 2]) && j--);

            continue;
        }

        s2[j++] = s1[i];
    }

    s2[j] = '\0';
}
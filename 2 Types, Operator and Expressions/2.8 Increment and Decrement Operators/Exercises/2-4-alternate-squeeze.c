#include <stdio.h>

void squeeze2(char[], char[]);

int main()
{
    char s[] = "cavalo";

    squeeze2(s, "av");

    printf("%s", s);
}

void squeeze2(char s1[], char s2[])
{
    int i, j, n;

    for (i = n = 0; s1[i] != '\0'; i++)
    {
        for (j = 0; s2[j] != '\0'; j++)
        {
            if (s1[i] == s2[j])
            {
                j = -1;
                break;
            }
        }

        if (j != -1)
        {
            s1[n++] = s1[i];
        }
    }

    s1[n] = '\0';
}
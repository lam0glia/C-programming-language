#include <stdio.h>
/* includes the strlen function */
#include <string.h>

int mystrlen(char[]);

int main()
{
    printf("mystrlen: %d\n", mystrlen("hello"));
    printf("strlen: %lu", strlen("hello\t"));
}

int mystrlen(char s[])
{
    int i;

    for (i = 0; s[i] != '\0'; i++)
        ;

    return i;
}
#include <stdio.h>

int main()
{
    printf("HINT: Just type CONTROL + D to enter EOF");
    printf("First char is EOF: %d", (getchar() != EOF));

    return 0;
}

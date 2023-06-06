#include <stdio.h>
#include <limits.h>

int main()
{
    printf("Ranges: MIN/MAX\n");
    printf("char: %d/%d\n", CHAR_MIN, CHAR_MAX);
    printf("short int: %d/%d\n", SHRT_MIN, SHRT_MAX);
    printf("long int: %ld/%ld\n", LONG_MIN, LONG_MAX);
    printf("signed int: %d/%d\n", INT_MIN, INT_MAX);
    printf("unsigned int: %d/%u\n", 0, UINT_MAX);
}
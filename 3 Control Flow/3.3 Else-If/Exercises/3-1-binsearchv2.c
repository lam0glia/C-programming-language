#include <stdio.h>
#include <time.h>

#define MAX 50000

int binsearch(int, int[], int);

int main()
{
    clock_t init, end;
    int arr[MAX];

    for (int i = 0; i < MAX; i++)
        arr[i] = i;

    init = clock();
    printf("%d\n", binsearch(1, arr, MAX));
    end = clock();

    printf("time: %f", ((float)(end - init)) / CLOCKS_PER_SEC);
}

int binsearch(int x, int v[], int n)
{
    int low, high, mid;

    low = 0;
    high = n - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;

        if (x < v[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }

    if (x == v[low - 1])
    {
        return low - 1;
    }

    return -1;
}
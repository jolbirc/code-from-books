#include <stdio.h>

/* Binary search: find x in v[0] <= v[1] <= ... <= v[n-1] */
int binsearch(int x, int v[], int n);

int main(void)
{
    // Test binary search
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int result = binsearch(7, arr, 10);
    printf("Result at index: %d\n", result);

    return 0;
}

int binsearch(int x, int v[], int n)
{
    int low, high, mid;

    low = 0;
    high = n - 1;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(x < v[mid])
        {
            high = mid - 1;
        }
        else if(x > v[mid])
        {
            low = mid + 1;
        }
        else
        {
            return mid;
        }
    }

    return -1;
}

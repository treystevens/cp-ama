#include <stdio.h>

void selection_sort(int a[], int n);
void find_largest(int a[], int n);

int main(void)
{

    int arr[5] = {0};
    printf("Enter 5 of integers: ");
    for (int i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    selection_sort(arr, 5);

    for (int i = 0; i < 5; i++)
        printf("%d, ", arr[i]);

    return 0;
}

void selection_sort(int a[], int n)
{
    if (n == 0)
        return;
    else
    {
        find_largest(a, n);
        selection_sort(a, n - 1);
    }
}

void find_largest(int a[], int n)
{
    int index, hi = a[0], temp;
    for (int i = 0; i < n; i++)
    {
        if (hi <= a[i])
        {
            index = i;
            hi = a[i];
        }
    }

    temp = a[index];
    a[index] = a[n - 1];
    a[n - 1] = hi;
}
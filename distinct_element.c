Question: C program to count distinct elements in an array

#include <stdio.h>
void dist_elem(int a[], int n);
int main()
{
    int size_array, i, arr[20];
    scanf(“%d”, &size_array);
    for(i=0; i<size_array; i++)
    {
        scanf(“%d”, &arr[i]);
    }
    dist_elem(arr, size_array);
    return 0;
}
void dist_elem(int a[], int n)
{
    int i, j;
    for (i=0; i<n; i++)
    {
        for (j=0; j<i; j++)
        {
            if (a[i] == a[j])
                break;
        }
        if (i == j)
            printf(“%d “, a[i]);
    }
}


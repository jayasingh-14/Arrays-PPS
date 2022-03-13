#include <stdio.h>
int main()
{
    int i, j, temp, a[20], n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements of array\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 1; i < n; i++)
    {
        temp = a[i];
        j = i - 1;

        while (j >= 0 && a[j] > temp)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = temp;
    }
    printf("Sorted Array Elements\n");
    for(i=0 ; i<n ; i++)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}
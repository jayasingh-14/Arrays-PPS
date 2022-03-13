#include <stdio.h>
int main()
{
    int i, j, temp, a[20],min_index, n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements of array\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0; i<n-1; i++)
    {
        min_index=i;
        for(j=i+1; j<n ; j++)
        {
            if(a[min_index]>a[j])
            min_index=j;
        }
        temp=a[i];
        a[i]= a[min_index];
        a[min_index]=temp;
    }
    printf("Sorted Array Elements: \n");
    for(i=0 ; i<n ; i++)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}    
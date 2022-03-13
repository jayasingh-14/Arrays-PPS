#include <stdio.h>
int main()
{
  int a[100], n, i, j, min_index, t, choice;
  printf("Select the type of sorting:\n");
  printf("1. Selection Sort\n");
  printf("2. Insertion Sort\n");
  scanf("%d", &choice);
  switch (choice)
  {
      case 1:
      printf("Enter number of elements:\n");
      scanf("%d", &n);
      printf("Enter %d elemenets:\n", n);
      for (i = 0; i < n; i++)
      {
        scanf("%d", &a[i]);
      }    
      for (i = 0; i < (n - 1); i++)
      {
        min_index = i;
        for (j = i + 1; j < n; j++)
      {
        if (a[min_index] > a[j])
        min_index = j;
      }
        if (min_index != i)
        {
          t = a[i];
          a[i] = a[min_index];
          a[min_index] = t;
        }
      }
      printf("Sorted Array Elements:\n");
      for (i = 0; i < n; i++)
      {
        printf("%d\n", a[i]);
      }
      break;
      case 2:
      printf("Enter number of elements\n");
      scanf("%d", &n);
      printf("Enter %d elemenets:\n", n);
      for(i=0; i<n; i++)
      {
          scanf("%d", &a[i]);
      }
      for(i=0; i<n; i++)
      {
          j=i-1;
          t=a[i];
          while(j>=0 && t<a[j])
          {
              a[j+1]=a[j];
              j--;
          }
          a[j+1]=t;
      }
      printf("Sorted Array Elements:\n");
      for(i=0; i<n; i++)
      {
          printf("%d\n", a[i]);
      }
      break;
  }      
  return 0;
}
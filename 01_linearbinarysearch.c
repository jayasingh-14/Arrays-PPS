#include<stdio.h>
int main()
{
    char choice;
    int i,n,j,k,low,high,mid;
    printf("A.Linear search");
    printf("\nB.Binary search\n");
    printf("choose one from above:\n");
    scanf("%c",&choice);
    printf("Enter number of elements in array:\n");
    scanf("%d",&n);
    int A[n];
    printf("Array elements are:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
     printf("element you want to search:");
        scanf("%d",&j);
    switch(choice)
    {
        case 'A':
       
        for(i=0;i<n;i++)
        {
            if(A[i]==j)
{
            k=i+1;
            break;
}
        }
        if(k>0)
        printf("%d is at %d location",j,k);
        break;
      case 'B':
      low=0;
      high=n-1;
      mid=(low+high)/2;
      while(low<=high)
      {
          if(A[mid]<j)
          low=mid+1;
          else if(A[mid]==j)
      {
          printf("%d is at %d location",j,mid+1);
          break;
      }
      else
      high=mid-1;
      mid=(low+high)/2;
      }
      break;
      default:
      printf("Unsuccessful search");
    }
    return 0;
}

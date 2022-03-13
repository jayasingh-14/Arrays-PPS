#include<stdio.h>
int main()
{
    int matrix[10][10], transpose[10][10], rows, columns, i, j;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &columns);
    printf("Enter the elements of the matrix\n");
    for(i=0; i<rows; i++)
    {
        for(j=0; j<columns; j++)
         {
             scanf("%d", &matrix[i][j]);
         }
    }
    printf("Entered matrix\n");
    for(i=0; i<rows;i++)
    {
        for(j=0; j<columns; j++)
         {
             printf("%d  ", matrix[i][j]);
         }   
             printf("\n");
    }     
    for(i=0; i<rows; i++)
    {
        for(j=0; j<columns; j++)
        {
            transpose[j][i]=matrix[i][j];
        }
    }        
    printf("Transpose of the matrix is :\n");
    for(i=0; i<columns;i++)
    {
        for(j=0; j<rows; j++)
         {
             printf("%d ", transpose[i][j]);
         }
             printf("\n");
   
    }
    return 0;         
}
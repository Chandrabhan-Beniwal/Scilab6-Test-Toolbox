#include<stdio.h>
#include"trans.c"

int main()
{
   int n, m, i, j;
   printf("Enter Number of Rows and Columns:-");
   scanf("%d %d", &n,&m);
   int A[100][100];
   printf("\n Enter Elements of matrix");
   for(i=0; i<n; i++)
   {
       for(j=0; j<m; j++)
       {
           printf("\n Enter Element A%d%d  ", i+1,j+1);
           scanf("%d",&A[i][j]);
       }
       printf("\n");
   }
   printf("Initial Matrix\n");
      for(i=0; i<n; i++)
   {
       for(j=0; j<m; j++)
       {
          printf("%d ", A[i][j]);
       }
       printf("\n");
   }
   int t[100][100];
   transpose(n, m,A,t);
   printf("\nTranspose of the Matrix\n");
   
   for(i=0; i<m; i++)
   {
       for(j=0; j<n; j++)
       {
          printf("%d ", t[i][j]);
       }
       printf("\n");
   }
   return 0;
}

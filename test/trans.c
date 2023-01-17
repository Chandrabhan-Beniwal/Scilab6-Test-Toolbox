#include<stdio.h>

int transpose(int n, int m, int A[][100], int t[][100])
{
    int i, j;
    for(j=0;j<n; j++)
    {
        for(i=0;i<m;i++)
        {
           t[i][j]=A[j][i];
        }
    }
}


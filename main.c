#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main()
{
    int p,q=0,a[100][100],i,j,k,n,x=0,y=0,z;
    printf("Enter the order of the matrix(for ex.(n*n))\n");
    scanf("%d",&n);
    printf("Enter the numbers of matrix row-wise from left to right..\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
        scanf("%d",&a[i][j]);
        }
    }
    for(k=0;k<n;k++)
    {
        x=x+a[k][k];
    }
    for(p=n-1;p>=0;p--)
    {
        y=y+a[q][p];
        q=q+1;
    }
    q=x-y;
    z=abs(q);
    printf("The Diagonal Difference is %d",z);
    return 0;
}

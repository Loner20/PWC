#include<stdio.h>

void main()
{
    int a[8][8],b[8][8],c[8][8],i,j,k;
    int sum=0;
    printf("\n Enter Value for First Matrix :\n ");
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
    
    printf("\n Enter value for Second Matrix :\n");
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("\n");
    printf("\n The First Matrix is :\n");
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            printf(" %d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("\n The second Matrix is :\n");
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            printf(" %d ",a[i][j]);
        }
        printf("\n");
    }

    printf("Product of Two Matrix \n");
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            sum=0;
            for (k=0; k<3; k++)
            {
               sum=sum+a[i][k]*b[k][j]; 
            }
            c[i][j]=sum;
        }
    }
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            printf(" %d ",c[i][j]);

        }
        printf("\n");
    }
}

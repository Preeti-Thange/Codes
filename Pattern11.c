#include<stdio.h>

void Pattern11(unsigned int row, unsigned int col)
{
    int i=0, j=0;
    for(i=1; i<=row; i++)
    {
        for(j=1; j<=col; j++)
        {
            if(i==j)
            {
                printf("%d\t",j)
            }
            else
            {
                printf("*\t");
            }
        }
        printf("")
    }
}
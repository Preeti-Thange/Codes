#include<stdio.h>

void Pattern16(unsigned int row, unsigned int col)
{
    int i=0, j=0;
    for(i=row; i>=1; i--)
    {
        for(j=1; j<=col; j++)
        {
            if(i>=j)
            {
                printf("*\t");
            }
        }
        printf("\n");
    }
}
int main()
{
    int val1=0, val2=0;
    printf("Enter the number of row\n");
    scanf("%d",&val1);

    printf("Enter the number of col\n");
    scanf("%d",&val2);

    Pattern16(val1,val2);
    return 0;
}
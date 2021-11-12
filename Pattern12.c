#include<stdio.h>

void Pattern12(unsigned int row, unsigned int col)
{
    int i=0, j=0;

    for(i =1; i<=row; i++)
    {
        for(j=1; j<=col; j++)
        {
            if(i % 2 == 0)
            {
                printf("*\t");
            }
            else
            {
                printf("%d\t",j);
            }
        }
        printf("\n");
    }
}
int main()
{
    unsigned val1=0, val2=0;
    printf("enter number of rows\n");
    scanf("%d",&val1);

    printf("enter number of col\n");
    scanf("%d",&val2);

    Pattern12(val1, val2);
    return 0;
}
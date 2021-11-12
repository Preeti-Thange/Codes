#include<stdio.h>
void Pattern9(unsigned int row, unsigned int col)
{
    int i,j=0;
    for(i=1; i<=row; i++)
    {
        for(j=1; j<=col; j++)
        {
            if(i % 2==0)
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
    unsigned int val1=0, val2=0;
    printf("Enter the number of row\n");
    scanf("%u",&val1);

    printf("Enter the number of col\n");
    scanf("%u",&val2);

    Pattern9(val1, val2);
    return 0;
}
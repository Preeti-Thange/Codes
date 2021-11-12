#include<stdio.h>
void Pattern15(unsigned int row, unsigned int col)
{
    int i=0,j=0;
    for(i=1; i<=row; i++)
    {
        for(j=1; j<=col; j++)
        {
            if((j==1) || (i==4) || (i==1) || (j==4))
            {
                printf("#\t");
            }
            else
            {
                printf("*\t");
            }
        }
        printf("\n");
    }
}
int main()
{
    int val1=0,val2=0;
    printf("Enter the numer of row\n");
    scanf("%d",&val1);

    printf("Enter the number of col\n");
    scanf("%d",&val2);

    Pattern15(val1,val2);

    return 0;
}
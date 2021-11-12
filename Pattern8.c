#include<stdio.h>
void Pattern8(unsigned int row, unsigned int col)
{
    int i=0,j=0;
    for(i=1; i<=row; i++)
    {
        for(j=1; j<=col; j++)
        {
            printf("%d\t",j);
        }
        printf("\n");
    }
}
int main()
{
    unsigned int val1=0, val2=0;
    printf("Enter number of rows\n");
    scanf("%u",&val1);

    printf("Enter the number cols\n");
    scanf("%u",&val2);

    Pattern8(val1,val2);
    return 0;
}
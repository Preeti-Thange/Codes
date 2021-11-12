#include<stdio.h>

void Pattern14(unsigned int row, unsigned int col)
{
     int i=0, j=0;
     for(i=1; i<= row; i++)
     {
         for(j=1; j<=col; j++)
         {
             if(i<j)
             {
                 printf("$\t");
             }
             else{
                 printf("%d\t",i);
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

    Pattern14(val1,val2);

    return 0;
}
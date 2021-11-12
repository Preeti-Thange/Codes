#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iSize)
{
    int i=0;
    printf("Elements from array are: \n");
    for(i=0; i<iSize; i++)
    {
        printf("%d\t",Arr[i]);
    }
}

int main()
{
    int *arr=NULL;
    int iLength=0, i=0;

    printf("Enter the number of elements\n");
    scanf("%d",&iLength);
    arr=(int *)malloc(iLength * sizeof(int));

    printf("Enter the elements: \n");
    for(i=0; i<iLength; i++)
    {
        scanf("%d",&arr[i]);
    }
    Display(arr,iLength);
    free(arr);
    
    return 0;
}
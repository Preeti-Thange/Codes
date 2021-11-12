#include<stdio.h>
#include<stdlib.h>

int FirstOccurance(int Arr[], int iLength, int val)
{
    int i=0;
    for(i=0; i<iLength; i++)
    {
        if(Arr[i]== val)
        {
             break;
        }
    }
    if(i==iLength)
    {
        return -1;
    }
    else
    {
        return i;
    }
}
int main()
{
    int *arr = NULL;
    int i =0,size=0, ret=0, iNo=0;

    printf("Enter the number of elements\n");
    scanf("%d",&size);

    arr=(int *)malloc(size *sizeof(int));

    printf("Enter the elements \n");
    for(i=0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the elements  that u want to search\n");
    scanf("%d",&iNo);
    
    ret = FirstOccurance(arr,size,iNo);
    if(ret == -1)
    {
        printf("There is no such a number\n");
    }
    else
    {
        printf("First occurance is at: %d\n",ret);
    }

    free(arr);
    
    return 0;
}

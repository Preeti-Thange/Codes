#include<stdio.h>
#include<stdlib.h>

int LastOccurance(int Arr[], int length, int val)
{
    int i=0;
    if((Arr[i] == NULL) || (length < 0))
    {
        return 0;
    }

    for(i = length-1; i >= 0; i--)
    {
        if(Arr[i] == val)
        {
            break;
        }
    }
    return i;
}
int main()
{
    int *arr=NULL;
    int ret=0, i=0, size=0, no=0;

    printf("Enter the number of elements\n");
    scanf("%d",&size);

    arr = (int *)malloc(size *sizeof(int));

    printf("Enter the elements\n");
    for(i = 0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter the elemnt that u want to search\n");
    scanf("%d",&no);

    ret=LastOccurance(arr,size,no);
    if(ret == -1)
    {
        printf("There is no such a number\n");
    }
    else
    {
        printf("Last occurance is at %d\n",ret);
    }

    free(arr);
    
    return 0;
}
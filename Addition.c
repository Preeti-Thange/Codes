#include<stdio.h>
#include<stdlib.h>

int Addition(int Arr[], int size)
{    
    int i=0, add=0;

    if((Arr == NULL) || (size <= 0))
    {
        return 0;
    }
    for(i=0; i<size; i++)
    {
        add = add + Arr[i];
    }
    return add;
}
int main()
{
    int *arr=NULL;
    int iLength=0, i=0;
    int ret=0;

    printf("Enter the no of elements\n");
    scanf("%d",&iLength);

    arr = (int *)malloc(iLength *sizeof(int));

    if(arr == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter the elements\n");
    for(i = 0; i<iLength; i++)
    {
        scanf("%d",&arr[i]);
    }
    ret=Addition(arr,iLength);
    printf("Additions of given elements are: %d\n",ret);

    free(arr);

    return 0;
}
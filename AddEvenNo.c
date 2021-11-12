#include<stdio.h>
#include<stdlib.h>

int AddEvenNo(int Arr[], int iLength)
{
    int i=0, add=0;
    if((Arr == NULL) || (iLength<=0))
    {
        return 0;
    }
    for(i=0; i<iLength; i++)
    {
        if(Arr[i] % 2 == 0 )
        {
            add = add + Arr[i];
        }
    }
    return add;
}
int main()
{
    int i=0, size=0, ret=0;
    int *arr = NULL;
    printf("Enter the number of elements\n");
    scanf("%d",&size);

    arr = (int *)malloc(size *sizeof(size));
    if(arr == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter the elements\n");
    for(i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }

    ret = AddEvenNo(arr,size);
    printf("Adittion of even elements are %d\n",ret);

    free(arr);
    return 0;
}
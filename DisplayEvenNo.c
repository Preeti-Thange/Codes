#include<stdio.h>
#include<stdlib.h>

void DisplayEven(int Arr[], int iLength)
{
    int i=0; 
    if((Arr == NULL) || (iLength<=0))
    {
        return;
    }
    printf("Elements from array are: \n");
    for(i=0; i<iLength; i++)
    {
        if(Arr[i] % 2 == 0)
        {
          printf("%d\n",Arr[i]);
        }
    }
}

int main()
{
    int *arr = NULL;
    int size=0,i=0;

    printf("Enter the numbers of elements\n");
    scanf("%d",&size);

    arr=(int *)malloc(size *sizeof(int));

    if(arr == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter the elements\n");
    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    DisplayEven(arr, size);
    free(arr);
    return 0;
}
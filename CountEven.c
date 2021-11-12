#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[], int iLength)
{
    int iCnt=0, i=0;
    if((Arr==NULL) || (iLength<=0))
    {
        return 0;
    }

    for(i=0; i<iLength; i++)
    {
        if(Arr[i] % 2 == 0)
        {
            iCnt++;
        }
    }
    return iCnt++;
}
int main()
{
    int *arr=NULL;
    int size=0, i=0,ret=0;;

    printf("Enter the number of elements\n");
    scanf("%d",&size);
    
    arr=(int*)malloc(size *sizeof(int));

    if(arr == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter the elements: \n");
    for(i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
    ret=CountEven(arr,size);
    printf("Count of even number is %d\n",ret);
    free(arr);
    return 0;
}
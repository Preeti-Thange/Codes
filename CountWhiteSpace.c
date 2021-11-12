#include<stdio.h>

int CountSpace(char str[])
{
    int iCnt = 0;
    if(str == NULL)
    {
        return 0;
    }
    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}
int main()
{
    char Arr[10];
    int ret = 0;
    printf("Enter string\n");
    scanf("%[^'\n']s",Arr);

    ret=CountSpace(Arr);
    printf("frequency of whitespace is: %d\n",ret);

    return 0;

}
#include<stdio.h>

int Display(char str[])
{
    printf("Characters from string are: \n");

    while(*str!='\0')
    {
        printf("%c\n",*str);
        str++;
    }
}

int main()
{
    char Arr[10];
    char ret=0;

    printf("Enter name: \n");
    scanf("%[^'\n']s",&Arr);

    printf("Name is: %s\n",Arr);

    ret=Display(Arr);

    return 0;
}
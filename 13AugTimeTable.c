#include<stdio.h>
void TimeTable(int iStd)
{
    //Using if else if
    if(iStd==1)
    {
        printf("Your exam is at: 11 AM\n");
    }
    else if(iStd==2)
    {
        printf("Your exam is at: 12 NOON\n");
    }
    else if(iStd==3)
    {
        printf("Your exam is at: 1 PM\n");
    }
    else if(iStd==4)
    {
        printf("Your exam is at: 2 PM\n");
    }
    else{
        printf("Wrong standard");
    }

    //usinf Switch case
    /*
         void TimeTable(int iStd)
         {
            case 1:
                printf("Your exam at: 11 am\n");
                break;

            case 2:
                printf("Your exam at: 12 noon\n");
                break;  

            case 3:
                printf("Your exam at: 1 pm\n");
                break;  

            case 4:
                printf("Your exam at: 2 pm\n");
                break;  

            default:
                printf("Wrong standard\n");                      
         }
    */

}
int main()
{
    int iValue=0;

    printf("Enter your standards\n");
    scanf("%d",&iValue);

    TimeTable(iValue);
    return 0;
}
#include<stdio.h>

int SumofFactors(int num){
    int sum=0;
    for(int i=1; i<=num/2; i++){
        if(num%i==0){
            sum += i;
        }
    }
    printf("Sum of factors of %d is %d",num,sum);
}

int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    SumofFactors(num);
    return 0;
}
/* Pranav sahebacha code */
#include<iostream>
using namespace std;

int main()
{
    int no=11;
    int *p=&no;
    int **q=&p;


    int value = 21;
    int &x = value;
    int &y = x;

    return 0;
}
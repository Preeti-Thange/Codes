#include<iostream>
using namespace std;

class MaxNo
{
    public:
    int Maximum(int iNo1,int iNo2)
    {
        if(iNo1>iNo2)
        {
            cout<<"1st number is greater\n"<<iNo1;
        }
        else
        {
            cout<<"2nd number is greater\n"<<iNo2;
        }
    }
};
int main()
{
    int val1=0,val2=0;
    int res=0;
    
    cout<<"Enter first no\n";
    cin>>val1;

    cout<<"Enter second no\n";
    cin>>val2;

    MaxNo obj;
    res=obj.Maximum(val1,val2);
    return 0;
}

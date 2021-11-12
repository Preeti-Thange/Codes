#include<iostream>
using namespace std;

class Array
{
    private:
    int *ptr;
    int size;

    public:
    Array(int no=5)
    {
        cout<<"Inside constructor\n";
        size=no;
        ptr=new int[size];
    }
    ~Array()
    {
        cout<<"Destructor\n";
        delete []ptr;
    }
    void Accept()
    {
        int iCnt=0;
        cout<<"Enter elements\n";
        for(iCnt=0;iCnt<size;iCnt++)
        {
            cin>>ptr[iCnt];
        }
    }
    void Display()
    {
        int iCnt=0;
        cout<<"Enter elements\n";
        for(iCnt=0;iCnt<size;iCnt++)
        {
            cout<<ptr[iCnt]<<"\n";
        }
    }
};
int main()
{
    cout<<"Inside main\n";
    int value=0;
    cout<<"Enter the number of elements\n";
    cin>>value;
    Array *obj=NULL;
    obj = new Array(value);
    obj->Accept();
    obj->Display();
    delete obj;
    return 0;
}
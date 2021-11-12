#include<iostream>
using namespace std;
 class Demo
 {
    public:
        int a;
    private:
        int b;
    protected:
        int c;

    public:
      Demo(int i,int j,int k)
      {
          cout<<"Constructor\n";
          this->a=i;        //or a=i;
          this->b=j;        //b=j;
          this->c=k;        //c=k;
      }    
      void fun()
      {
          cout<<"value of a"<<this->a<<"\n";
          cout<<"value of b"<<this->b<<"\n";
          cout<<"value of c"<<this->c<<"\n";
      }
 };
 int main()
 {
     cout<<"Inside main\n";
     Demo *p=new Demo(10,20,30);
     cout<<"value of a: "<<p->a<<"\n";
     //cout<<"value of b: "<<p->b<<"\n";      error bcoz of private
     //cout<<"value of c: "<<p->c<<"\n";      error bcoz of protected
     p->fun();
     delete p;
     return 0;
}


//VIRTUAL FUNCTIONS IN C++
#include<iostream>
using namespace std;
class Base
{
    public:
     void print(){cout<<"Base"<<endl;}//we also need to have virtual here before void
};
class Derived:public Base
{
  public:
  void print(){cout<<"Derived"<<endl;}//override keyword is used to avoid some errors and also it shows that it is overriden by some function
};
int main()
{
 Base b;
 Derived d;
 b.print();
 d.print();
 Base *ptr=new Derived; //if we change new Derived to &d it calls the base class
 ptr->print();
 return 0;
}
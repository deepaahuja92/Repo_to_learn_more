//STATIC UNWINDING IN EXCEPTION HANDLING
#include<iostream>
using namespace std;
void f1()
{
    cout<<"f1 Begins";
    throw 100;
    cout<<"f1 Ends";
}
void f2() throw(int)
{
    cout<<"f2 Begins";
    f1();
    cout<<"f2 ends";
}
int main()

{
    try
    {
        f2();
    }
    catch(int i)
    {
         cout<<"This is a exception";
    }
    return 0;
}
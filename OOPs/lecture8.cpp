//multilevel inteheritance and multiple inheritance
#include<iostream>
// using namespace std;
// class A{};
// class B{};
// class C:public A,public B{};
// int main()
// {
//     C obj;
//     return 0;
// }
//DIAMOND PROBLEM IN CPP
using namespace std;
class A{
    public:
    int x;
};
class B:virtual public A{}; //if we remove virtual then we will get the compiler error
class C:virtual public A{};
class D:public B,public C{};
int main()
{
    D obj;
    cout<<obj.x;
    return 0;
}
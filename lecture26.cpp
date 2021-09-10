//SMART POINTER
#include<iostream>
using namespace std;
/*class SP
{
    int *ptr;
    public:
    SP(int *p=NULL)
    {
        ptr=p;
    }
    ~SP(){delete ptr;}
    int &operator*(){return *ptr;}
};
int main()
{
  SP sp(new int());
  *sp=20;
  cout<<*sp;
  return 0;
}*/
template <class T>
class SP
{
     T *ptr;
    public:
    SP(T *p=NULL){ptr=p;}
    ~SP() {delete ptr;}
    T &operator*(){return *ptr;}
    T *operator->(){return ptr;}
};
int main()
{
    SP<int>sp(new int());
    *sp=20;
    cout<<*sp;
    return 0;
}
 
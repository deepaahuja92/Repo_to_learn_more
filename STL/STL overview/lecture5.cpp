#include<iostream>
using namespace std;
template<typename t>
struct Pair
{
  t x,y;
  Pair(t i,t j){x=i,y=j;}
  t getfirst(){return x;}
  t getsecond(){return y;}
};
int main()
{ 
    struct Pair<int> p1(10,20);
    cout<<p1.getfirst()<<" "<<p1.getsecond();
    return 0;
}
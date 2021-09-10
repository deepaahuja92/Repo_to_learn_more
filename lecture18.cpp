//IN CLASS MEMBER ARE PRIVATE BY DEFAULT AND IN STRUCTURE MEMBER ARE PUBLIC BY DEFAULT
//IF WE TRY TO ACCESS THE MEMBERS OF CLASS THEN WE WILL GET THE COMPILER ERROR BUT HOWEVER WE CAN MAKE IT'S MEMBER PUBLIC BY WRITING PUBLIC BELOW CLASS
#include <iostream>
using namespace std;
struct point
{
  int x;
  int y;
  point(int x,int y);
  void print()
  {
      cout<<x<<" "<<y;
  }
};
int main()
{
    point p(10,20);
    p.print();
    return 0;
}
// struct Base
// {
//     int x;
// };
// struct Derived:Base { };//Derived struct is also public bydefault
// class box
// {   public:
//     int x;
// };
// class derived:box{ };//Derived class is private bydefault
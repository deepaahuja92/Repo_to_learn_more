#include<iostream>
using namespace std;
// class Point
// {
//  private:
//  int x,y;
//  public:
//  Point()
//  {
//      x=0;
//      y=0;
//  }
//  Point(int x1,int y1){
//      x=x1;
//      y=y1;
//  }
//  void Print()
//  {
//      cout<<x<<" "<<y<<endl;
//  }
// };
//INITIALIZER LIST
// class Point
// {
//  private:
//  int x,y;
//  public:
//  Point():x(0),y(0)
//  {
      
//  }
//  Point(int x1,int y1):x(x1),y(y1)
//  {
     
//  }
//  void Print()
//  {
//      cout<<x<<" "<<y<<endl;
//  }
// };
// int main()
// {
//     Point p1,p2(10,15);
//     p1.Print();
//     p2.Print();
//     Point *ptr= new Point(5,10);
//      ptr->Print();
//     return 0;
// }
//COPY CONSTRUCTOR-->CONSTRUCTS WHICH COPY THE OTHER CONSTRUCTOR
// class test
// {
//     int *ptr;
//     public:
//     test(int x)
//     {
//         ptr=new int(x);
//     }
//     test(const test &t)
//     {
//         int val=*(t.ptr);
//         ptr=new int(val);
//     }
//     void set(int x)
//     {
//         *ptr=x;
//     }
//     void print()
//     {
//         cout<<*ptr<<" ";
//     }
// };
// int main()
// {
//     test t1(10);
//     test t2(t1);
//     t2.set(20);
//     t1.print();
//     t2.print();
//     return 0;
// }
//DESTRUCTOR
class destructor
{
    public:
    destructor(){cout<<"Constructor Called"<<endl;}
    ~destructor(){cout<<"Destructor Called"<<endl;}
};
int main()
{
    destructor t;
    return 0;
}
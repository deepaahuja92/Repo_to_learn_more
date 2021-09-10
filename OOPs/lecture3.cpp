//this pointer in Cpp
#include<iostream>
using namespace std;
class Point
{
 int x,y;
 public:
 Point(int x,int y)
 {
     this->x=x;
     this->y=y;
 }
};
int main()
{
 Point p1(10,20),p2(20,30);
 return 0;
}
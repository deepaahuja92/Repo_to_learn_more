//UNIONS
#include<iostream>
using namespace std;
//Type Running
union test 
{
    int x;
    float y;
};
int main()
{
    test t;
    t.y=1.1;
    cout<<t.x;
    return 0;
}
//using annonymous union to use one type for multiple purposes
/* struct node
  {
     int data;
     union
     {
         struct{
             node *left,*right;
         };
         struct{
             node *prev,*next;
         };
     };
   };*/
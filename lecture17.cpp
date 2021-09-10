#include <iostream>
using namespace std;
// struct point
// {
//     int x;
//     int y;
// };
// int main()
// {
//  point p={10,20};
//  point *ptr=&p;
//  cout<<ptr->x<<" ";
//  ptr->x=30;
//  cout<<ptr->x<<" ";
//  cout<<p.x<<" ";
//  return 0;
// }
// struct point
// {
//     int std;
//     char sec;
// };
// int main()
// {
//     struct point a[5];
//     int i;
//     for(i=0;i<10;i++){ //point p=a[0];
//         cin>>a[i].std; //cout<<p.x<<p.y;
//         cin>>a[i].sec;
//         if(a[i].sec==10)
//         cin>>a[i].sec;
//     }
//     for(i=0;i<10;i++)
//     {
//         cout<<a[i].std<<" "<<a[i].sec;
//     }
//     return 0;
// }
//PASSING STRUCTURES AS ARGUMENTS TO THE FUNCTION
struct point
{
    int x;
    int y;
};

 void print_structure(point p)
 {
     cout<<p.x<<" "<<p.y;
 }
 int main()
 {
     struct point p={10,20};
     print_structure(p);
     return 0;
 }
 //Passing a argument as a reference
 //change point p as point &p
 //BY POINTER
 //change point p as point *p and pass the address as &p
 
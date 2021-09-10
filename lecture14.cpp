//References in C++
#include <iostream>
#include <vector>
using namespace std;
/*int main()
{
    int x=10;
    int &y=x;
    cout<<x<<endl;
    x+=5;
    cout<<"y= "<<y<<endl;
    y+=5;
    cout<<"x= "<<x<<endl;
    return 0;
}*/
//applications(To modify )
/*void swap(int &x,int &y)
{
    int temp=x;
    x=y;
    y=temp;
}
int main()
{
    int x=10;
    int y=15;
    swap(x,y);
    cout<<"x= "<<x<<endl;
    cout<<"y= "<<y;
    return 0;
}*/
//Avoiding copy of large objects during function call
 /*void print(vector<int> &v)
 {
     for(auto x:v)
     {
         cout<<x<<" ";
     }
 }
 int main()
 {
     vector<int>v;
     for(int i=0;i<1000;i++)
     {
         v.push_back(i);
     }
     print(v);
     return 0;
 }*/
 //modifications in each for loop
 /*int main()
 {
     vector<int> vect{10,20,30,40};
     for(auto x:vect)//not going to change the value of x. change will 
     x+=5;
     for(auto x:vect)
     cout<<x<<" ";
 }*/
 //Avoiding copy of large objects in each for loops
 int main()
 {
     vector<string> vect{"GFG","practice"};
     for(const auto &x: vect)
     cout<<x<<" ";
     return 0;
 }
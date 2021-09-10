#include<iostream>
#include<string>
using namespace std;
struct point
{
    int x;
    int y;
};
struct  student
{
    int roll;
    string name;
    char section;
};

int main()
{
    //struct point p;//writing struct is optional in cpp but mandatory in c
    // p.x=7;
    // p.y=100;
    //cout<<p.x<<" "<<p.y;
    student s={45,"Harry",'A'};
    //DESIGNATED INITIALIZATION
    struct point p={.x=100 , .y=20};//might give error
    return 0;
}
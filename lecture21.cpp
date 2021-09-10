//DYNAMIC MEMORY ALLOCATION
#include<iostream>
using namespace std;
// int main()
// {
//     static int a;
//     int b,c;
//     int *ptr=new int[5];//ptr is in stack and array of five integers is in heap
//     delete[] ptr;
//     ptr=NULL;
//     return 0;
// }
int *func()
{
    int *ptr=new int;
    *ptr=10;
    return ptr;
}
int main()
{
    cout<<*func<<" ";
    int *ptr=func();
    delete[] ptr;
    return 0;
}
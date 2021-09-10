//Iterators in C++ STL
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v={10,20,30,40};
    vector<int>::iterator i=v.begin();
    i=next(i,2);//we have not written position then it means just next
    cout<<(*i)<<" ";
    i++;
    i=prev(i,2);
    cout<<(*i)<<" ";
    i=v.end();
    i--;
    cout<<(*i)<<" ";
    advance(i,1);//advance is used to modify the same iterator
    return 0;//adaptors don't have iterators
}
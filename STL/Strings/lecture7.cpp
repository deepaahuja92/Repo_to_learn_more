//TUPLE IN C++ STL
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
 tuple<string,int,string>t=make_tuple("abc",10,"xyz");
 cout<<get<0>(t);
 return 0;
}
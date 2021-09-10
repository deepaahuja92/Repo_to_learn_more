//MAPS IN C++ STL
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int>m;
    m.insert({10,200});
    m[5]=100;
    for(auto &x:m){
        cout<<x.first<<" "<<x.second;
    }
    //value doesn't modify in the given key
    //but m[10] can update
    //m.at(10)=90;//at gives out of range exception if it is not present
    //find function checks according to the key if it is present
    return 0;
}
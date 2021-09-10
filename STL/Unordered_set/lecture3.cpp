#include<iostream>
#include<unordered_set>
using namespace std;
int main()
{
    int arr[6]={10,8,8,7,8,9},i;
    unordered_set<int>s;
    for(i=0;i<6;i++){
        if(s.find(arr[i])==s.end())
        s.insert(arr[i]);
        else cout<<arr[i]<<" ";
    }
    return 0;
}
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    //1st way
    vector<int> v;
    v.push_back(5);
    v.push_back(10);
    v.push_back(15);
    //SECOND WAY
    // vector<int>v={10,20,30};
    // for(int x:v)
    // cout<<x;//if we write &x then x can change v
    //   int i;
    // for(i=0;i<v.size();i++)
    // cout<<v[i]<<" ";
    //THIRD WAY TO INITIALIZE
    // int n=3,x=10; //size and value 
    // vector<int>v(n,x);
    //auto it=vector<int>::iterator it
    //FIFTH WAY
    int arr[]={10,20};
    int n=sizeof(arr)/sizeof(arr[0]);
     vector<int> v(arr,arr+n);
    //v[i] does not check out of bound checking
    //v.at(i) checks out of bound checking
}
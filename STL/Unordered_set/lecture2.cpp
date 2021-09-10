#include<iostream>
#include<unordered_set>
using namespace std;
int main()
{
    unordered_set<int>s;
    int arr[6]={4,8,5,8,7,5},i;
    for(i=0;i<6;i++){
        s.insert(arr[i]);
    }
    auto it=s.begin();
     for(;it!=s.end();it++)cout<<(*it)<<" ";
     return 0;
}
//FOR PRINTING IN SAME ORDER--->WE CAN USE IF(S.FIND(ARR[I])==S.END())THEN INSERT
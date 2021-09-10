//FIND THE FREQUENCY OF EACH ELEMENT IN O(n) TIME IN CONSTANT TIME COMPLEXITY
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void ContDist(int arr[],int n,int k){
    unordered_map<int,int>m;
    int i;
    for(i=0;i<k;i++){
        m[arr[i]]++;
    }
    cout<<m.size()<<" ";
    for(i=k;i<n;i++){
        m[arr[i-k]]--;
        if(m[arr[i-k]]==0)m.erase(arr[i-k]);
        m[arr[i]]++;
        cout<<m.size()<<" ";
    }
}
int main()
{

}
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//NAIVE APPROACH
// void naive(int a[],int n){
//     int i,j,count;
//     for(i=0;i<n;i++){
//         count=0;
//         for(j=0;j<n;j++){
//             if(j!=i&&a[j]>a[i]){
//                 count++;
//             }
//             cout<<count<<" ";
//         }
//     }
// }
//EFFICIENT APPROACH
void printGreater(int a[],int n)
{
    map<int,int>m;
    for(int i=0;i<n;i++){
        m[a[i]]++;//m[3]=m[3]+1;
    }
    int cum_freq=0;
    for(auto it=m.rbegin();it!=m.rend();it++){
         int freq=it->second;
         it->second=cum_freq;
         cum_freq+=freq;
    }
    for(int i=0;i<n;i++)
    cout<<m[a[i]]<<" ";
}
int main()
{
 
}
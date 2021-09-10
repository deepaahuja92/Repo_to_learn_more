//SORT ELEMENTS ACCORDING TO FREQUENCY IN LINEAR TIME
#include<bits/stdc++.h>
using namespace std;
void sortByFrequency(int *arr,int n){
    unordered_map<int,int>mp;
    int i;
    for(i=0;i<n;i++)mp[arr[i]]++;//increment of value at mp[arr[i]]
    vector<int>freq[n+1];
    for(i=0;i<n;i++){
        int f=mp[arr[i]];//storing the frequency of arr[i] in f
        if(f!=-1){
            freq[f].push_back(arr[i]);
            mp[arr[i]]=-1;
        }
    }
    int index=0;
    for(i=n;i>=0;i--){
        for(int x:freq[i]){
            for(int j=0;j<i;j++)arr[index++]=x;
        }
    }
    for(i=0;i<n;i++)cout<<arr[i]<<" ";
}
int main()
{
    int arr[7]={10,5,20,5,10,10,30};
    sortByFrequency(arr,7);
    return 0;
}
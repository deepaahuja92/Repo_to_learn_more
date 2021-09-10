//maximum element in sub array using dequeue
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t,n,k,sum1,sum2,i;
    cin>>t;
    while(t--){
        cin>>n>>k;
        sum1=0,sum2=0;
        vector<int>v(n);
        for(i=0;i<n;i++)cin>>v[i];
        sort(v.begin(),v.end());
         for(i=0;i<(n-1)/2;i++)
        {
            int temp=v[i];
            v[i]=v[n-1-i];
            v[n-1-i]=temp;
        }
        for(i=0;i<n-2;i=i+2){
            sum1+=v[i];
        }
        for(i=1;i<n-2;i+=2){
            sum2+=v[i];
        }
        sum2+=v[n-2]+v[n-1];
        if(sum2>=sum1)cout<<sum2<<endl;
        else cout<<sum1<<endl;
    }
	return 0;
}
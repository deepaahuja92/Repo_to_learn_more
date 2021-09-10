 #include<bits/stdc++.h>
 using namespace std;
 void sorting(vector<int> &num,int n)
 {
     vector<pair<int,int>>v;
     int i;
     for(i=0;i<n;i++)
     v.push_back({num[i],i});
     sort(v.begin(),v.end());
     for(i=0;i<n;i++){
         cout<<v[i].first<<" "<<v[i].second<<endl;
     }
 }
 int main()
 {
   vector<int>v={20,40,30,10};
   sorting(v,4);
   return 0;
 }
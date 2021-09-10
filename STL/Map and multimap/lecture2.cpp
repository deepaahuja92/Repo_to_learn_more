#include<bits/stdc++.h>
using namespace std;
map<int,string>m;
void add(int price,string name){
    m[price]=name;
}
string find(int price){
    if(m.find(price)!=m.end()){
       return m.find(price)->second;
    }
    else return "";
}
void printsorted(int price)
{
    for(auto x:m){
        cout<<x.first<<" "<<x.second<<" ";
    }
}
void printGreaterSorted(int price){
    auto it=m.upper_bound(price);
    while(it!=m.end()){
        cout<<it->second<<" ";
        cout<<it->first<<endl;
        it++;
    }
}
void printSmaller(int price){
    auto it=m.lower_bound(price);
    for(auto it2=m.begin();it2!=it;it2++){
        cout<<it2->first<<" ";
        cout<<it2->second<<endl;
    }
}
int main()
{

}
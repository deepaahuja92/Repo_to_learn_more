#include<iostream>
#include<set>
using namespace std;
set<int>s;
void Insert(int x){
    s.insert(x);
}
bool find(int x){
    return(s.find(x)!=s.end());
}
void Delete(int x){
    s.erase(x);
}
int getceiling(int x){
    auto it=s.lower_bound(x);
    if(it!=s.end())return *it;
    else return INT_MAX;
}
int getfloor(int x){
    auto it=s.lower_bound(x);
    if(it==s.begin()){
        if(*it==x)return *it;
        else return INT_MIN;
    }else{
        if(it!=s.end()&&*it==x)return *it;
        it--;
        return *it;
    }
}
int main(){
return 0;
}
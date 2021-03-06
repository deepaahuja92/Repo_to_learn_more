#include<iostream>
#include<list>
#include<algorithm>
#include<vector>
using namespace std; 

list<int> l;
void insert(int n){
  l.push_back(n);
}
void print(){
    for(auto x:l)cout<<x<<" ";
    cout<<endl;
}
void replace(int n,vector<int> &seq){
  auto it=find(l.begin(),l.end(),n);
  if(it==l.end())return;
  it=l.erase(it);
  l.insert(it,seq.begin(),seq.end());
}
int main()
{
    insert(3);
    insert(2);
    insert(2);
    insert(10);
    print();
    vector<int>seq={20,30,40};
    replace(10,seq);
    print();
    return 0;
}
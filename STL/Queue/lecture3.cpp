#include <iostream>
#include <queue>
#include<stack>
using namespace std;
void reverse_k_items(queue<int> &q, int k)
{
    stack<int>s;
    int i=0;
    if(q.empty()==true||k>q.size()||k<=0)return;
    while(i<k){
        s.push(q.front());
        q.pop();
        i++;
    }
    while(s.empty()==false)
    {
        q.push(s.top());
        s.pop();
    }
    i=0;
    while(i<q.size()-k)
    {
        q.push(q.front());
        q.pop();
        i++;
    }

}
int main()
{
    int k = 3;
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    reverse_k_items(q, k);
    for(int i=0;q.empty()==false;i++){
        cout<<q.front()<<" ";
        q.pop();
    }
}
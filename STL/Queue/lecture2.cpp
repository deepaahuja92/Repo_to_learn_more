#include<iostream>
#include<queue>
using namespace std;
void print(int N)
{
    queue <string> q;
    q.push("5");
    q.push("6");
    for(int i=0;i<N;i++){
        string curr=q.front();
        cout<<curr<<" ";
        q.pop();
        q.push(curr+"5");
        q.push(curr+"6");
    }
}
int main()
{
    int N=10;
    print(N);
    return 0;
}
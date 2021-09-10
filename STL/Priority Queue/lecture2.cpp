#include<iostream>//sorting an array using priority queue
#include<queue>
using namespace std;
int main()
{
    int arr[5]={12,13,10,5,6};
    priority_queue<int>que(arr,arr+5);
    int i;
    for(i=4;que.empty()==false;i--){
        arr[i]=que.top();
        que.pop();
    }
    for(i=0;i<5;i++)cout<<arr[i]<<" ";
  return 0;
}
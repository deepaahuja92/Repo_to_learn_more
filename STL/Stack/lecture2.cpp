#include<iostream>
#include<stack>
using namespace std;
void reversed(string &str)
{
    stack<char>s;
    int i;
    for(i=0;i<str.length();i++)
    s.push(str[i]);
    for(i=0;i<str.length();i++){
    str[i]=s.top();
    s.pop();
    }
}
int main()
{
    string str;
    cin>>str;
    reversed(str);
    int i;
    cout<<str;
    return 0;
}
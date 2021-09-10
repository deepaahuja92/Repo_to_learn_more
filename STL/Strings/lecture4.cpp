//CHECK IF A STRING IS PANGRAM
#include<bits/stdc++.h>
using namespace std;
bool check_panagram(string s)
{
    bool arr[26]={0};
    if(s.length()<26)return false;
    for(int i=0;i<s.length();i++){
        char x=s[i];
        if(x>='a'&&x<='b')arr[x-'a']=true;
        else if(x>='A'&&x<='B')arr[x-'A']=true;
    }
    for(int i=0;i<26;i++){
        if(arr[i]==false)return false;
    }
    return true;
}
int main()
{
    string check="HEllO";
    cout<<check_panagram(check);
    return 0;
}
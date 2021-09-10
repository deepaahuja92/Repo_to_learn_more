//FIND THE EXTRA CHARACTER IN THE STRING
#include<bits/stdc++.h>
using namespace std;
char find_extra_char(string s1,string s2)
{
  int count[256]={0},i;
  for(char x:s2)count[x]++;
  for(char x:s1)count[x]--;
  for(i=0;i<256;i++)
  {
      if(count[i]==1)return (char)i;
  }
  return 0;
}
int main()
{
  string s1="abc";
  string s2="abcd";
  cout<<find_extra_char(s1,s2);
  return 0;
}
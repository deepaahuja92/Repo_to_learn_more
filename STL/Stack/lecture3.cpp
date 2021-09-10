#include<iostream>//check if the group of parenthesis is valid or not
#include<stack>
using namespace std;
bool matching(char a,char b)
{
    if((a=='('&&b==')')||(a=='{'&&b=='}')||(a=='['&&b==']'))return true;
    else return false;
}
bool isBalanced(string str)
{
   stack<int>s;
   int i;
   for(i=0;i<str.length();i++){
      if(str[i]=='('||str[i]=='{'||str[i]=='['){
          s.push(str[i]);
      }else{
          if(s.empty()==true)return false;
          else if(matching(s.top(),str[i])==false)return false;
          else s.pop();
      }
   }
   return (s.empty()==true);
}
int main()
{
     string str;
     cin>>str;
     isBalanced(str);
     return 0;
}
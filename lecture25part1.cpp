#include<iostream>
#include<exception>
using namespace std;
class Myexception:public exception
{
    virtual const char* what() const throw();
    {
        return "Exception Occured";
    }
};
int main()
{
    try
    {
        {
            throw Myexception();
        }
    }
    catch(exception &e)
    {
       cout<<e.what();
    }
    return 0;
}
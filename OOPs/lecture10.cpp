#include<iostream>
using namespace std;
class Employee;
class Printer
{
  public:
  void printEmp(const Employee &e);
};
class Employee
{
 private:
 int id;
 string name;
 public:
 friend class Printer;
 Employee(int i,string n):id(i),name(n){ }
};
void Printer::printEmp(const Employee &e)
{
    cout<<e.id<<" "<<e.name;
}
int main()
{
    Printer p;
    Employee E(101,"ABC");
    p.printEmp();
    return 0;
}  

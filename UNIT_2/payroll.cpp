#include<iostream>
using namespace std;
class Employee
{
    public:
    int EmpID;
    string name;
    float salary;
    void SetEmployee(int id,string n,float s)
    {
        EmpID=id;
        name=n;
        salary=s;
    }
    void displayemployee();
};
void Employee::displayemployee()
{
    cout<<"EmployeeID!"<<EmpID  
        <<",Name!"<<name
        <<",Salary!Rs"<<salary<<endl;
}
int main()
{
    Employee e1,e2;
    e1.SetEmployee(101,"Ravi",50000.75);
    e2.SetEmployee(102,"Priya",62000.50);
    e1.displayemployee();
    e2.displayemployee();
    return 0;
}
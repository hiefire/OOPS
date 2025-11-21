#include<iostream>
using namespace std;
class student
{
    public:
    string name;
    string roll;
    int marks;
    void display()
    {
        cout<<"Name:"<<name
            <<",roll:"<<roll
            <<",marks:"<<marks<<endl;
    }
};
int main()
{`
    student s1;
    s1.name="deva";
    s1.roll="083";
    s1.marks=95;
    s1.display();
    return 0;
}
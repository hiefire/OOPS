#include<iostream>
using namespace std;
class student{
    int roll;
    public:
    student(int r){
        roll = r;
    }
    student(const student&s){
        roll = s.roll;
        cout<<"copy constructor called";
    }
    ~student(){
        cout<<"destructor called";
    }
    void display(){
        cout<<"roll is :"<<roll<<endl;
    }
};
int main(){
    student s1(7);
    student s2(s1);
    s1.display();
    s2.display();
    return 0;
}
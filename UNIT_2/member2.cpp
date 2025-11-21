#include<iostream>
using namespace std;
class sum{
    int a;
    int b;
    int r;
    public:
    sum(int x,int y){
        a = x;
        b = y;
        cout<<"constructor";
    }
    ~sum(){
        cout<<"destructor called";
    }
    void display(){
        cout<<"Area of square :"<<a*b;
    }
};
int main(){
    sum s1(5,2);
    s1.display();
    return 0;
}
#include<iostream>
using namespace std;
class car{
    string name;
    string brand;
    float price;
    public:
    car(){
        name = "hyundai";
        brand = "i20";
        price =800000;    
        cout<<"constructer invited";
    }
    ~car(){
        cout<<"destructor called";
    }
    void display(){
        cout<<"company:"<<name<<"Model:"<<brand<<"price:"<<price<<endl;
    }
};
int main(){
    car c1;
    c1.display();
    return 0;
}
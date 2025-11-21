#include<iostream>
using namespace std;
class student{
    int marks[5];
    public:
    void getmarks(){
        cout<<"enter marks of 5 subjects:";
        for(int i=0;i<5;i++){
            cin>>marks[i];
        }
    }
    void show(){
        cout<<"marks are:";
        for(int i=0;i<5;i++){
            cout<<marks[i];
        }
    }
};
int main(){
    student s1;
    s1.getmarks();
    s1.show();
    return 0;
}

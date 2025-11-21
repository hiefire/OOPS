#include<iostream>
using namespace std;
class patient
{
    public:
    int patientid;
    string name;
    string disease;
    void setpatient (int id,string n,string d)
    {
        patientid=id;
        name=n;
        disease=d;
    }
    void showpatient();
};
 void patient::showpatient()
 {
    cout<<"Patient ID:"<<patientid
        <<",Name:"<<name
        <<",disease:"<<disease<<endl;
 }
 int main()
 {
    patient p1,p2;
    p1.setpatient(301,"arjun","Fever");
    p2.setpatient(302,"Meena","Diabetes");
    p1.showpatient();
    p2.showpatient();
    return 0;
 }
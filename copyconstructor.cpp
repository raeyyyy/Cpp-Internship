#include<iostream>
#include<string>
using namespace std;

class Teacher{
    private:
    double salary;   //data hiding
    public:
    string name;
    string dept;
    string subject;
    
    void changeDept(string newDept){
        dept=newDept;
    }

    //getter setter

    void setSalary(double s){
        salary=s;
    }

    int getSalary(){
        return salary;
    }

    Teacher(){
        cout<<"constructor is calling"<<endl;
    }

    Teacher(string s,string d, string sub, double sal){
        this->name=s;          // to access the object properties, then use this keyword.
        this->dept=d;
        this->subject=sub;
        this->salary=sal;
    }

    void getInfo(){
        cout<<"Teacher name "<<name<<endl;
        cout<<"Teacher subject "<<subject<<endl;
    }
};

int main(){
    // Teacher t1;
    // t1.name="sarang";
    // t1.subject="Math";
    // t1.changeDept("CSE");
    // t1.getInfo();
    // t1.setSalary(100);
    // int salary= t1.getSalary();
    // cout<<salary<<endl;
    Teacher t1("sumedh","CSE","C++",1500000);
    t1.getInfo();
    Teacher t2(t1);
    t2.getInfo();
    // cout<<t1.name<<endl;
    return 0;
}
//Internal question solve


#include<iostream>
using namespace std;
class Person {
    string name;
    int age;
    
    public:
    void setdata()
    {
        name="Manoj Chaudary";
        age=21;
    }
    void display()
    {
        cout<<"Name:"<<name<<endl<<"Age:"<<age<<endl;
    }
};
class Employee:public Person {
    int employee_id;
    public:
    void setdata()
    {
        int employee_id;
    }
    void display()
    {
        cout<<"Employee Id"<<employee_id<<endl;
    }
};
class Manager:public Employee {
    string department;
    public:
    void setdata(){
        department="School of Engineering";
    }
    void display() {
        cout<<"Department"<<department<<endl;
    }
};
int main()
{
    Manager m;
    m.Person::setdata();
    m.Employee::setdata();
    m.setdata();
    m.Person::display();
    m.Employee::display();
    m.display();
    return 0;
}

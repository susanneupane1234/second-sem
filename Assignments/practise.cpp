#include<iostream>
using namespace std;
class student
{
    private:
    int a,b,c;
    string d,e,f;
    float g,h;
    public:
    void get_data()
    {
        cout<<"Enter"<<endl;
        cin>>a>>b>>c;
    }
    void show_data()
    {
        cout<<a<<b<<c;
    }
}
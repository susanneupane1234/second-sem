#include<iostream>
using namespace std;
class Coordinates
{
    int x,y,t1,t2,temp2;
    
    public:
    Coordinates(int a,int b)
    {
        x=a,y=b;
    }
    Coordinates operator++()
    {
        x+=4;
        y+=4;
    }
    void display()
    {
        if (t1==x &&t2==y)
        cout<<"x="<<x<<"y="<<y<<endl;
        else
        cout<<"x="<<x<<"y="<<y<<endl;
    }
};
int main()
{
    Coordinates c(2,3);
    cout<<"Coordinates before overloading"<<endl;
    c.display();
    ++c;
    cout<<"Coordinates after overloading"<<endl;
    c.display();
}
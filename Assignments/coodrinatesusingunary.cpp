#include<iostream>
using namespace std;
class Coordinates
{
    float x,y;
    public:
    Coordinates(int a,int b)
    {
        x=a,y=b;
    }
    Coordinates operator ++(int) {
        x+=4;
        y+=4;
    }
    void display()
    {
        cout<<"x="<<x<<"y="<<y<<endl;
    }
};
int main()
{
    Coordinates c(5,6);
    cout<<"Coordinates before overloading"<<endl;
    c.display();
    c++;
    cout<<"Coordinates after overloading";
    c.display();
    return 0;
}

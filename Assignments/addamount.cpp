#include<iostream>
using namespace std;
class Money {
    int r,p;
    public:
    Money(){}
    Money(int a,int b) //Parameterized Constructor
    {
        r=a;
        r=b;
    }
    Money operator +(Money m)
    {
        Money temp;
        temp.r=r+m.r;
        temp.p=p+m.p;
        if(temp.p>=100)
    {
        temp.r++;
        temp.p=100;
    }
    return temp;
    }
    void display() {
        cout<<"ruppess"<<r<<endl;
        cout<<"Paisa"<<p<<endl;
    }
};
int main() {
    int r[2],p[2],i;
    for (i=0;i<2;i++)
    {
        cout<<"Enter amount"<<i+1<<endl;
        cout<<"ruppess";
        cin>>r[i];
        cout<<"Paisa";
        cin>>p[i];
    }
    Money m1(r[0],p[0]),m2(r[1],p[1]),m3;
    m3=m1+m2;
    cout<<"\n Total amount of money"<<endl;
    m3.display();
    return 0;
}
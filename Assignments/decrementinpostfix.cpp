#include<iostream>
using namespace std;
class Decrement
{
    int num,temp1,temp2;
    public:
    Decrement(int a)
    {
        num=a;
        temp1=num;
    }
    Decrement operator --(int)
    {
        temp2=num--;
    }
    void display()
    {
        if(temp1==num)
        cout<<num<<endl;
        else
        cout<<"Returned="<<temp2<<"Decremented="<<num;
    }
};
int main()
{
    Decrement d(6);
    cout<<"The number before overloading";
    d.display();
    d--; //d.operator--(int)
    cout<<"THe number after overloading"<<endl;
    d.display();
}

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
    Decrement operator --() {
        temp2=--num;
    }
    void display()
    {
        if(temp1=--num)
        cout<<num<<endl;
        else
        cout<<num<<"Prefix notation returned"<<temp2<<"Decremented"<<num<<endl;
    }
};
int main()
{
    Decrement d(11);
    cout<<"The number before overloading";
    d.display();
    
    cout<<"The number after overloading"<<endl;
    d.display();
    return 0;
}

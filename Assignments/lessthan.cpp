#include<iostream>
using namespace std;
class Test
{
    int num;
    public:
    Test(int a)
    {
        num=a;
    }
    bool operator <(Test t)
    {
        if(num<t.num)
        return true;
        else
        return false;
    }
    void display()
    {
        cout<<num;
    }
};
int main()
{
    float n1,n2;
    cout<<"Enter any two numbers";
    cin>>n1>>n2;
    Test t1(n1),t2(n2);
    if (t1<t2)
    {
        cout<<"Smaller number is";
        t1.display();
    }
    else{
        cout<<"Smaller number is";
        t2.display();
    }
    return 0;
}
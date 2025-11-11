/*Umesh Uchai solve tough question of question set*/
/* Create class called One and Two with each having one private member.
Add member function to set a value(say setvalue) on each class. Add one more function Max() that is friendly to both classes.
Max() function should compare two private member of two classes and show
maximum among them. Create one object of each class. Then, set a value to them. Display the maximum number among them*/

#include<iostream>
using namespace std;
class Two;
class One{
    float a;
    public:
    void setValue(float x)
    {
        a=x;
    }
    friend void Max(One , Two);
};
class Two{
    float b;
    public:
    void setValue(float y)
    {
      b=y;
    }
    friend void Max(One, Two);
};
void Max(One m, Two n)
{
    if (m.a>n.b)
     cout<<m.a<<" is the larger or maximum number. ";
    else 
     cout<<n.b<<" is the larger or maximum number. ";
}
int main(){
    One ob1;
    Two ob2;
    ob1.setValue(4.5);
    ob2.setValue(6.6);
    Max(ob1,ob2);
    return 0;
}
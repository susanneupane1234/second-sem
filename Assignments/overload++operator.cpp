#include <iostream>
using namespace std;
class Increment
{
    int num, temp1, temp2;

    public:

    Increment(int a)
    {
        num = a;
        temp1 = num;
    }
    Increment operator++(int)
    {
        temp2 = num++;
    }
    void display()
    {
        if (temp1 == num)
        {
            cout << num << endl;
        }
        else
        {
            cout << "Postfix notation returned=" << temp2 << "Incremented" << num << endl;
        }
    }
};
int main()
{
    Increment i(5);
    cout << "The number before overloading";
    i.display();
    i++;
    cout << "The number after overloading";
    i.display();
    i++;
    cout << "The number after overloading" << endl;
    i.display();
    return 0;
}

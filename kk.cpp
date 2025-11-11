#include<iostream>
using namespace std;

int main()  // It's better to specify the return type 'int' explicitly
{
    int a, b;
    float c;
    cout << "Enter two numbers" << endl;
    cin>>a>>b;
    cout<<"The numbers are " << a << " "<<b;  // Added space for better formatting
    return 0;
}
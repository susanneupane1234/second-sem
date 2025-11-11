#include<iostream>
using namespace std;

class check {
    int num;
public:
    check() : num(0) {}  // Initialize to default (0)
    check(int a) : num(a) {}  // Initialize with value

    // Const-correct equality check (pass by const reference)
    bool operator==(const check& c) const {
        return (num == c.num);
    }

    // Static since it doesn't use member variables
    static int addition(int a, int b) {
        return a + b;
    }
};

int main() {
    check obj1(5), obj2(5), obj3(10);

    if (obj1 == obj2) {
        cout << "obj1 and obj2 are equal\n";
    }

    if (!(obj1 == obj3)) {
        cout << "obj1 and obj3 are not equal\n";
    }

    cout << "Addition: " << check::addition(3, 4) << endl;

    return 0;
}
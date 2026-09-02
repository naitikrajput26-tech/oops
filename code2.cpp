//Develop a program to demonstrate parameter passing techniques (call by value, reference, and address) and analyze their effects on variable modification.
#include<iostream>
using namespace std;

class Student {
public:
    int marks;

    void callByValue(int x) {
        x = x + 10;
        cout << "Call By Value: " << x << endl;
    }

    void callByReference(int &x) {
        x = x + 10;
    }

    void callByAddress(int *x) {
        *x = *x + 10;
    }
};

int main() {
    Student s;

    s.marks = 50;

    int a = s.marks;
    int b = s.marks;
    int c = s.marks;

    s.callByValue(a);
    s.callByReference(b);
    s.callByAddress(&c);

    cout << "Original Marks: " << s.marks << endl;
    cout << "After Reference: " << b << endl;
    cout << "After Address: " << c << endl;

    return 0;
}
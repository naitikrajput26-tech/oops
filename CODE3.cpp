#include <iostream>
using namespace std;

class Calculator {
public:
    inline int square(int x) {
        return x * x;
    }
    int multiply(int a, int b = 2) {
        return a * b;
    }
    int add(int a, int b) {
        return a + b;
    }
    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    Calculator c;

    cout << "Integer Addition: " << c.add(10, 20) << endl;

    cout << "Double Addition: " << c.add(10.5, 20.5) << endl;

    cout << "Square: " << c.square(5) << endl;

    cout << "Multiplication: " << c.multiply(10) << endl;

    cout<<"Naitik Rajput"<<endl;

    return 0;
}
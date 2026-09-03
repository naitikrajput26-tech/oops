//Write a program to pass objects as arguments and return objects from functions to perform operations on user-defined data.
#include <iostream>
using namespace std;
class Number {
public:
    int value;
    void input() {
        cout << "Enter value: ";
        cin >> value;
    }
    Number add(Number n) {
        Number result;
        result.value = value + n.value;
        return result;
    }
    void display() {
        cout << "Result: " << value << endl;
    }
};

int main() {
    Number n1, n2, n3;
    n1.input();
    n2.input();
    n3 = n1.add(n2);
    n3.display();
return 0;
}
//Design a program to convert a procedural implementation of a student record system into an object-oriented approach using classes and objects.
#include <iostream>
using namespace std;

class Student {
    int rollNo;
    string name;
    float marks;

public:
    void input() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Roll No: ";
        cin >> rollNo;
        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display() {
        cout << "Student Details:"<<endl;
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s;

    s.input();
    s.display();

    return 0;
}
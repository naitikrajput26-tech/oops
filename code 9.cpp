//Experiment-9
//Name-Naitik Rajput , 2503201000744
//Q.Design a program using pointers to objects and arrays of objects to manage dynamic data structures.
#include <iostream>
#include <string>
using namespace std;

class Student {
    int roll;
    string name;
    float mark;

public:
    void input() {
        cout << "Enter Roll No: ";
        cin >> roll;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Marks: ";
        cin >> mark;
    }

    void display() {
        cout << "Roll No: " << roll<<endl;
           cout  << "Name: " << name<<endl;
            cout << "Marks: " << mark << endl;
    }
};

int main() {
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    Student *students = new Student[n];
    Student *p = students;

    cout << "Enter student details:"<<endl;
    for (int i = 0; i < n; i++) {
        cout << "Student " << i + 1 << ":"<<endl;
        (p + i)->input();
    }
    cout << "Student Details:"<<endl;
    for (int i = 0; i < n; i++) {
        (p + i)->display();
    }

    return 0;
}
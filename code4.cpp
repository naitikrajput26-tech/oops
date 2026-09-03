#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Collection {
private:
    vector<int> numbers;
    vector<string> names;

public:
   Collection() {
        numbers = {10, 20, 30, 40, 50};
        names = {"Aman", "Riya", "Karan"};
    }
    void displayNumbers() {
        cout << "Displaying integers using auto & range-based for\n";
        for (auto n : numbers) {
            cout << n << " ";
        }
        cout << endl;
    }
    void displayNames() {
        cout << "\n Displaying names using auto & range-based for\n";
        for (auto &name : names) {
            cout << name << " ";
        }
        cout << endl;
    }
    void displayUsingIterator() {
        cout << "\nUsing auto with iterator\n";
        for (auto it = numbers.begin(); it != numbers.end(); ++it) {
            cout << *it << " ";
        }
        cout << endl;
    }
};

int main() {
    Collection obj;
    obj.displayNumbers();
    obj.displayNames();
    obj.displayUsingIterator();
    return 0;
}
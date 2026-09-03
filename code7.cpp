//Implement a program using static members and friend functions to illustrate shared data and controlled access
#include <iostream>
using namespace std;

class sf {
private:
    int value;
    static int count;

public:

    sf(int x) {
        value = x;
        count++;
    }

    static void showCount() {
        cout << "Number of Objects: " << count << endl;
    }

    friend void showValue(sf obj);
};

int sf::count = 0;

void showValue(sf obj) {
    cout << "Value: " << obj.value << endl;
}

int main() {

    sf obj1(10);
    sf obj2(20);

    showValue(obj1);
    showValue(obj2);

    sf::showCount();

    return 0;
}
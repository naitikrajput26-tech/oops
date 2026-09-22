#include <iostream>
using namespace std;

class Complex {
    int a, b;

public:
    void setData(int x, int y) {
        a = x;
        b = y;
    }

    void showData() {
        cout << a << " + " << b << "i\n";
    }
    //bind kesse huaa
    // Complex add (Complex c){
    //     Complex temp;
    //     temp.a=a+c.a;
    //     temp.b=b+c.b;
    //     return temp;
    // }
      Complex operator + (Complex c){
        Complex temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
        return temp;
    }
};

int main() {
    Complex c1, c2, c3;

    c1.setData(5, 4);
    c2.setData(7, 4);

    c1.showData();
    
   // c3=c1+c2;
    c3=c1.operator +c2;
    //iske baad simple addition s eho jaega kyuki operator overloading ho gyii re baba
  // c3=c1.add(c2);
    c3.showData();
    return 0;
}
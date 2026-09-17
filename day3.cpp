#include <iostream>
using namespace std;
class shape{
    public:
    void what(){
        cout<<"Shape can be any type";
    }
    void length(){
        cout<<"the length of the shape is";
    }
};
class circle : public shape{
    public:
    void what (){
        cout<<"shape is circle"<<endl;; //overring
    }
    void length(int x){
        cout<<"the radius of the shape is"<<x;//over hiding
    }
} ;

int main()
{ circle obj;
  obj.what();
  obj.length(5);


    return 0;
}
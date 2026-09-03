//Develop a program to demonstrate different types of constructors and destructor behavior in object lifecycle management.
#include <iostream>
using namespace std;
class cd{
    int x,y;
    public:
    
     cd(){
         cout<<"Constructor\n";
     }
     cd(int x,int y){
         this->x=x;
         this->y=y;
         cout<<(x+y)<<" para.Constructor\n";
     }
    ~cd(){
        cout<<"Destructor\n";
    }
};
int main() {
    cd o1;
    cd o2(7,8);

    return 0;
}

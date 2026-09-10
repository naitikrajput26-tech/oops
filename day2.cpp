#include <iostream>
#include <memory>
using namespace std ;
void function ( ){
    unique_ptr<int>ptr(new int (50));
    cout<<*ptr<<endl;
    cout<<&ptr;
    cout<<ptr;
    
}

int main()
{
    function();
    return 0;}
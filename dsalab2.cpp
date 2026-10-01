//program to check weather the given no. is palindrome using stack
#include <iostream>
#include <stack>
using namespace std;
int main(){
    int n,x,y;
    stack<int,>
    cout<<"enter the number\n";
    cin>>n;
    x=n;
    while(x>0){
        y=x%10;
        s.push(y);
        x=x/10;
    }
    x=n;
    while(x>0){
        y=x%10;
        if(y!=s.top()){
            cout<<"No. is not Palindrome\n";
            return;
        }
        s.pop();
        x=x/10;
    }

    cout << "Palindrome";

    return 0;
}


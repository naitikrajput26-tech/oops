//factorial 0f n using recursion
#include <iostream>
using namespace std;
int fact(int n){
    if(n<=0){
        return 1;
    }else {
        return n*fact(n-1);
    }
}
int main()
{
int x=5;
int y;
y=fact(5);
cout<<y;

    return 0;
}
//fibonacci 
#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1)
        return n;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;

    cout << "Enter number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";

    for (int i = 0; i < n; i++) {
        cout << fibonacci(i) << " ";
    }

    return 0;
}
//hanoi tree
#include <iostream>
using namespace std;

void towerOfHanoi(int n, char maint, char helpt, char destinationt)
{
    if(n == 1)
    {
        cout << maint << "---> "<< destinationt << endl;
        return;
    }

    towerOfHanoi(n-1, maint, destinationt, helpt);
    cout << maint<< " --> " << destinationt << endl;
    
    towerOfHanoi(n-1, helpt, maint, destinationt);
}

int main()
{
    int n;
    cout << "Enter number of disks: ";
    cin >> n;
    towerOfHanoi(n, 'A', 'B', 'C');
 return 0;
}
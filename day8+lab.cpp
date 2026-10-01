#include <iostream>
using namespace std;
 class CALL{
     int x,y;
     static int c;
     public:
     CALL(){
         cout<<" default construstor \n";
     }

     CALL(int a,int b){
         x=a;
         y=b;
         
     }
     CALL(const CALL &u ){
         x=u.x;
         y=u.y;
     }
     inline int square(int x){
         return x*x;
     }
     void Naitik(){
         c++;
         cout<<c<<endl;
         cout<<"Funtion with my name\n"<<endl;
     }
     friend int Naman( CALL a);
 };
 int CALL::c=0;
 int Naman(CALL a){
     cout<<a.x<<" "<<a.y<<endl;
     return a.x*a.y;
 }                     
 
int main()
{
   CALL A1(2,4),a1(3,4);
   cout<<"inline function "<<A1.square(3)<<endl;
   A1.Naitik();
   a1.Naitik();
   CALL A2=a1;
   cout<<"friend function called "<<Naman(A2)<<endl;
    return 0;
}
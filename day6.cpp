#include <iostream>
using namespace std;
class Marks
{
    int intmarks;
    int extmarks;
    public:
    Marks(){
        intmarks=0;
        extmarks=0;
    }
    Marks(int im,int em){
        intmarks=im;
        extmarks=em;
        
    }
    
    Marks operator + (Marks mx){
        Marks temp;
        temp.intmarks=intmarks+mx.intmarks;
        temp.extmarks=extmarks+mx.extmarks;
        return temp;
    }
    void display(){
        cout<<intmarks<<" "<<extmarks<<endl;;
    }
    
   Marks operator -(Marks nx);
};

//scope resolution;
//first datatype second class::fuction name
Marks Marks :: operator -(Marks nx){
    Marks temp;
    temp.intmarks=intmarks-nx.intmarks;
    temp.extmarks=extmarks-nx.extmarks;
        return temp;
}
int main()
{Marks m1(20,25),m2(30,32);
Marks m3=m1+m2;
   m3.display();
   Marks m4=m1-m2;
   m4.display();
    return 0;
}
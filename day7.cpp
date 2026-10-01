#include <iostream>
using namespace std;
class Marks
{
	int marks;
public:
	Marks() {
		marks=0;
	}
	Marks(int im) {
		marks=im;
	}
   void 	increasemarks(int x) {
marks=marks+x;
	}
	void operator +=(int y){
	    marks=marks+y;
	}

	void display() {
		cout<<marks<<endl;;
	}
	friend void operator-=(Marks &m,int z);
};

void operator-=(Marks &m,int z){
    m.marks=m.marks-z;
}
	int main()
	{	Marks m1(20);
        m1.increasemarks(6);
        m1+=(4);
        m1-=(3);
		m1.display();
		return 0;
	}

	#include <iostream>
using namespace std;
class Marks
{
	int marks;
public:
	Marks() {
		marks=0;
	}
	Marks(int im) {
		marks=im;
	}
   void 	increasemarks(int x) {
marks=marks+x;
	}
	void operator +=(int y){
	    marks=marks+y;
	}

	void display() {
		cout<<marks<<endl;;
	}
	friend void operator--(Marks &m);
};

void operator--(Marks &m){
    m.marks=m.marks-1;
}
	int main()
	{	Marks m1(20);
        m1.increasemarks(6);
        m1+=(4);
        m1--();
		m1.display();
		return 0;
	}
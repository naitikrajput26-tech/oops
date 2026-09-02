//Design a program to convert a procedural implementation of a student record system into an object-oriented approach using classes and objects.

#include <iostream>
using namespace std;
class student {
	string name;
	string rollno;
	int m,n,o,p,q;
public:
	student (string x, string y) {
		name=x;
		rollno= y;
		cout<<x<<" "<<y<<"\n";
	}
public:
	void avg(int a, int b, int c, int d, int e) {
		m=a;
		n=b;
		o=c;
		p=d;
		q=e;
		cout<<((a+b+c+d+e)/5);
	}
};
int main()
{
	int a,b,c,d,e;
	string name,rollno;
	cin>>name>>rollno;
	cin>>a>>b>>c>>d>>e;
	student s1(name,rollno);
	s1.avg(a,b,c,d,e);

	return 0;
}
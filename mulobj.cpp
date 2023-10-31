#include <iostream>

using namespace std;

class Base{
	public:
		int a;
};

class DerivedOne: public Base{
	public:
		int b;
};
class DerivedTwo: public DerivedOne{
	public:
		int c;
};
int main(){
	DerivedTwo obj;
	obj.a = 10;
	obj.b = 20;
	obj.c = 30;

	cout<<"a: "<<obj.a<<"\tb: "<<obj.b<<"\tc: "<<obj.c<<endl;
}

/* OutPut --->
 *
 *corporate@ACTS23:~/cpp/day8> vi mulobj.cpp
corporate@ACTS23:~/cpp/day8> g++ mulobj.cpp
corporate@ACTS23:~/cpp/day8> ./a.out
a: 10   b: 20   c: 30

*/


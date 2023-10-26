#include <iostream>

using namespace std;

class Test{
	mutable int num;  // Mutable data member

public:
	Test(int n):num(n){}

	void disp() const {cout<<"Const Num: "<<num<<endl; }
	void disp() {cout<<"NON-Const Num: "<<num<<endl; }

	void update(int n)const {cout<<"const update"<<endl; num+=n; }
	void update(int n) {cout<<"Non-Const update"<<endl; num+= n+10; }

};
int main(){
	const Test cobjA = 100; //const obj

	cobjA.disp();
	cobjA.update(10);
	cobjA.disp();

	Test cobjB = 200; //non-const obj
	
	cobjB.disp();
	cobjB.update(10);
	cobjB.disp();
}

/* 
 * OutPut --->
 *
 * corporate@ACTS23:~/cpp> vi constprog.cpp
corporate@ACTS23:~/cpp> g++ constprog.cpp
corporate@ACTS23:~/cpp> ./a.out
Const Num: 100
const update
Const Num: 110
NON-Const Num: 200
Non-Const update
NON-Const Num: 220

*/

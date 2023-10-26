#include <iostream>

using namespace std;

class Test{
	const int num; //const data member

public:
	Test(int n): num(n){}
	void disp() const {cout <<"const disp ..."<<num<<endl;}

	void disp() {cout <<"Non const disp ..."<<num<<endl; }

};
int main(){
	const Test a = 100;
	Test b = 20;
	a.disp();
	b.disp();
}

/*
 * OutPut--->
 *
 * corporate@ACTS23:~/cpp> g++ constfisrt.cpp
corporate@ACTS23:~/cpp> ./a.out
const disp ...100
Non const disp ...20
corporate@ACTS23:~/cpp>
*/

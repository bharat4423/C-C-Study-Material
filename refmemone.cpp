#include<iostream>
using namespace std;

class Test{
	int &num;
public:
	Test(int &n):num(n){}
	void disp() {cout<<"In disp Num: "<<num<<"\t&num: "<<&num<<endl;}

};
int main(){
	int var = 100;
	cout<<"In main...Var: "<<var<<"\t&var: "<<&var<<endl;
	Test a = var;
	Test b = var;

	a.disp();
	b.disp();

}

/*  
 OutPut---->

 corporate@ACTS23:~/cpp> vi refmemone.cpp
corporate@ACTS23:~/cpp> g++ refmemone.cpp
corporate@ACTS23:~/cpp> ./a.out
In main...Var: 100      &var: 0x7ffc6207777c
In disp Num: 100        &num: 0x7ffc6207777c
In disp Num: 100        &num: 0x7ffc6207777c

*/


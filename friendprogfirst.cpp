#include <iostream>
using namespace std;

class Test{
	int num;
	Test(int n = 0):num(n){}
	void disp(){cout<<"Num: "<<num<<endl; }

		friend int main();

};
 int main(){
	 Test a = 100;
	 a.disp();
 }

/* 
 * OutPut --->
 *
corporate@ACTS23:~/cpp> vi friendprogfirst.cpp
corporate@ACTS23:~/cpp> g++ friendprogfirst.cpp
corporate@ACTS23:~/cpp> ./a.out
Num: 100

*/


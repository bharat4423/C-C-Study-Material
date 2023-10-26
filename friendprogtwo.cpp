#include <iostream>

using namespace std;

class Test{
	int num;
	Test(int n = 0): num(n){}
	void disp(){cout<<"Num: "<<num<<endl; }
		friend int main();
	};

	int main(){
		Test a = 100;
		a.disp();
		a.num = 200;
		cout<<"In Main:"<<a.num<<endl;
		a.num = 300 ;
		a.disp();
	}

/*
 OutPut---->

 corporate@ACTS23:~/cpp> vi friendprogtwo.cpp
corporate@ACTS23:~/cpp> g++ friendprogtwo.cpp
corporate@ACTS23:~/cpp> ./a.out
Num: 100
In Main:200
Num: 300

*/

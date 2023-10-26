#include <iostream>

using namespace std;

class Test{
	int num; //normal data
	public:
	Test(int n):num(n){}
	void disp(){cout<<"Num: "<<num<<endl; }
	Test &plusplus(){
		num++;
		return *this; //returning the object used for calling

	}
};

int main(){
	Test a = 100;
	a.disp();
	Test res = a.plusplus();

	a.disp();
	res.disp();
}


/*
 *Output--->

 corporate@ACTS23:~/cpp> vi thissampleone.cpp
corporate@ACTS23:~/cpp> g++ thissampleone.cpp
corporate@ACTS23:~/cpp> ./a.out
Num: 100
Num: 101
Num: 101

*/

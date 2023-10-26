
//This program is using Mutable Functions
#include <iostream>
 using namespace std;

 class Test{
	 mutable int num; //mutable data member
 public:
	 Test(int n):num(n){}
	 void disp() const {cout<<"Num: "<<num<<endl; }
	 void update(int n)const { num+=n; }

 };

int main(){
	const Test cobjA = 100; //const obj
	cobjA.disp();
	cobjA.update(10);
	cobjA.disp();

	Test cobjB = 200;  //non-const obj
	cobjB.disp();
	cobjB.update(10);
	cobjB.disp();


}



/* OutPut--->
 *
 * corporate@ACTS23:~/cpp> ./a.out
Num: 100
Num: 110
Num: 200
Num: 210


*/

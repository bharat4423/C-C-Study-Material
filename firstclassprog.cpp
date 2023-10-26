#include <iostream>
 using namespace std;

 class Test{
	 int num; //normal data member

 public:
	 Test(int n):num(n){}
	 void disp(){cout<<"Num: "<<num<<endl; }
 };

int main(){
	Test a = 100;
	a.disp();

}
/* Output--->
 *
 * corporate@ACTS23:~/cpp> ./a.out
Num: 100
*/

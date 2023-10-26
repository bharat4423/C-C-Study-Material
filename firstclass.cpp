
//This program we used in update method 
#include <iostream>
using namespace std;

class Test{
	int num; //normal data number
public:
	Test(int n):num(n){ }
	void disp(){ cout<<"Num: "<<num<<endl; }
	void update(int n){ num+=n; }
};
int main(){
	Test a = 100;
	a.disp();
	a.update(10);
	a.disp();
}



/*OutPut------->
 corporate@ACTS23:~/cpp> ./a.out
Num: 100
Num: 110
 */

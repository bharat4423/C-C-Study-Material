#include <iostream>

using namespace std;

class Base{
	void fun(){cout<<"Base:: fun"<<endl;}
};

class Derived:virtual public Base{
	void funOne(){cout<<"Base::funeOne"<<endl;}
};

int main(){
	cout<<"Base: "<<sizeof(Base)<<endl;
	cout<<"Derived: "<<sizeof(Derived)<<endl;
}

/* OutPut-->
 *
 * corporate@ACTS23:~/cpp/day9> vi inhersizeSix.cpp
corporate@ACTS23:~/cpp/day9> g++ inhersizeSix.cpp
corporate@ACTS23:~/cpp/day9> ./a.out
Base: 1
Derived: 8

*/


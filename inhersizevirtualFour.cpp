#include <iostream>
using namespace std;

class Base{
	int a;
};

class Derivedone:virtual public Base{
	 int b;
};
class DerivedTwo:virtual public Base{
	int c;
};

class Derived: public Derivedone, public DerivedTwo { };

int main(){
	cout<<"Base: "<<sizeof(Base)<<endl;
	cout<<"Derivedone: "<<sizeof(Derivedone)<<endl;
	cout<<"DerivedTwo: "<<sizeof(DerivedTwo)<<endl;
	cout<<"Derived: "<<sizeof(Derived)<<endl;
}

/* OutPut -->
 *
 * corporate@ACTS23:~/cpp/day9> vi inhersizevirtualFour.cpp
corporate@ACTS23:~/cpp/day9> g++ inhersizevirtualFour.cpp
corporate@ACTS23:~/cpp/day9> ./a.out
Base: 4
Derivedone: 16
DerivedTwo: 16
Derived: 32

*/



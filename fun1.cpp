#include <iostream>
 using namespace std;

 class Base{
	 public:
		 virtual void fun(){cout<<"Base::fun()"<<endl;}
 };

class Derived:public Base{
	public:
		void fun(){cout<<"Derived::fun()"<<endl;}

};

void funCaller(Base *bPtr){ //using Base class pointer
	bPtr->fun();
}
int main(){
	Base bobj;
	Derived dobj;

	funCaller(&bobj);
	funCaller(&dobj);
}


/* OutPut -->
 *
 * corporate@ACTS23:~/cpp/day9> g++ fun1.cpp
corporate@ACTS23:~/cpp/day9> ./a.out
Base::fun()
Derived::fun()

*/

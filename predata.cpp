#include <iostream>
using namespace std;

class Base{
        int priData;
	void priFun(){cout<<"void Base::priFun()"<<endl;}

 public:
	int pubData;
	void pubFun(){cout<<"void Base::pubFun()"<<endl;}
};

class Derived:public Base{
	public:
		void derFun(){
			priData = 10;
			priFun();
			pubData = 20;
			pubFun();
		}
};
 int main(){
	 Derived dobj;
	 dobj.derFun();
 }


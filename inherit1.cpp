#include<iostream>
 using namespace std;

 class Base{
	 public:
		 void fun(){cout<<"Base::fun()"<<endl;
		}
		 void funThree(){cout<<"Base::funThree"<<endl;}
 };

class Derived:public Base{
	public: 
		void fun(int){cout<<"Derived::fun(int)"<<endl;}
		void funOne(){cout<<"Derived::funOne()"<<endl;}
		void funTwo(){cout<<"Derived::funTwo()"<<endl;}
};
int main(){
	Derived d;
	d.fun(10);
	d.funOne();
	d.funTwo();
	d.funThree();
}

/*
 * Output-->
 * corporate@ACTS23:~> vi inherit1.cpp
corporate@ACTS23:~> g++ inherit1.cpp
corporate@ACTS23:~> ./a.out
Derived::fun(int)
Derived::funOne()
Derived::funTwo()
Base::funThree
*/

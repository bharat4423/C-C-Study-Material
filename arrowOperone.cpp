#include<iostream>
using namespace std;

class Test{
	int data;
	public:
	Test(int n=0):data(n){}
	void print(){cout<<"Data: "<<data<<endl; }

	Test *operator->(){
		return this;
	}
};

int main(){
	Test obj=100;
	obj.print();
	obj->print(); //No error
}

	
/*
 * Output--->
 * corporate@ACTS23:~/cpp/day6> g++ arrowOperone.cpp
corporate@ACTS23:~/cpp/day6> ./a.out
Data: 100
Data: 100
*/


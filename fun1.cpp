#include <iostream>
using namespace std;

void fun();
void funOne();
void funTwo();

void funCaller(void (*)()); //function taking pointer to function as args...

int main(){
	funCaller(fun);
	funCaller(funOne);
	funCaller(funTwo);
}

void fun(){
	cout<<"fun() Called..."<<endl;
}
void funOne(){
	cout<<"funOne() called..."<<endl;
}
void funTwo(){
	cout<<"funTwo() called.."<<endl;
}

void funCaller(void (*fptr)()){
		cout<<"funCaller() started..."<<endl;
		fptr();
		cout<<"funCaller() Finished.."<<endl;

		cout<<"**************************"<<endl;
		}
/*
 * Output --->
 *
 * corporate@ACTS23:~/cpp/day6> vi fun1.cpp
corporate@ACTS23:~/cpp/day6> g++ fun1.cpp
corporate@ACTS23:~/cpp/day6> ./a.out
funCaller() started...
fun() Called...
funCaller() Finished..
**************************
funCaller() started...
funOne() called...
funCaller() Finished..
**************************
funCaller() started...
funTwo() called..
funCaller() Finished..
**************************
*/

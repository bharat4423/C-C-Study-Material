#include <iostream>

using namespace std;

int main(){
	auto fun = []{cout<<"Hello world"<<endl;};
	fun();
}

/*
 * OutPut
 *
 * corporate@ACTS23:~/cpp/day14> vi lambdaone.cpp
corporate@ACTS23:~/cpp/day14> g++ lambdaone.cpp
corporate@ACTS23:~/cpp/day14> ./a.out
Hello world

*/

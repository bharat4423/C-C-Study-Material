#include <iostream>
using namespace std;
/*
 *
 * Syntax of lambada in c++
 * [capture block] (Arguments){
 * 	logic here //Body of the function
 * 	}
 */

int main(){
	int var=10;
	auto fun = [var](){cout<<"Inside lambda : " <<var<<endl;};

	fun();
}

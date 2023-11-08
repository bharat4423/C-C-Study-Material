
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
	int var=10, someMorevar = 20;
	auto fun = [var]() mutable {
		var+=10;
	cout<<"Inside lambda : " <<var<<endl;
	};

	fun();
}

/*Output--->
 * corporate@ACTS23:~/cpp/day14> vi lambdaCaptureTwo.cpp
corporate@ACTS23:~/cpp/day14> g++ lambdaCaptureTwo.cpp
corporate@ACTS23:~/cpp/day14> ./a.out
Inside lambda : 20
*/

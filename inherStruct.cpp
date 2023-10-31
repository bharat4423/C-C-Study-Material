#include <iostream>

using namespace std;

struct Base{
	void disp(){cout<<"Base --> disp()"<<endl;}
};
struct Derived:Base{
};
int main(){
	Derived obj;
	obj.disp();
}

/* OutPut -->
 *
 corporate@ACTS23:~/cpp/day8> vi inherStruct.cpp
corporate@ACTS23:~/cpp/day8> g++ inherStruct.cpp 
corporate@ACTS23:~/cpp/day8> ./a.out
Base --> disp()

*/

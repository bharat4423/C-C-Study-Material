#include <iostream>
using namespace std;

class Existing{
	public: 
		void disp(){cout<<"Existing --> disp()"<<endl;}
};

class New:public Existing{
};
int main(){
	New obj;
	obj.disp();
}
/* OutPut -->
 *
 corporate@ACTS23:~/cpp/day8> vi inherone.cpp
corporate@ACTS23:~/cpp/day8> g++ inherone.cpp 
corporate@ACTS23:~/cpp/day8> ./a.out
Existing --> disp()
*/


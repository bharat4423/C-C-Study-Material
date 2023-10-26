#include <iostream>
using namespace std;

class Test{
	int &&num;

public:
	Test(int n):num(move(n)){}
	void disp(){cout<<" in disp num: "<<num<<"\t&num: "<<&num<<endl; }

};

int main(){
	Test a = 100;
	a.disp();

	Test b = 200;
	a.disp();
	b.disp();

}

/*
  Output -->

  corporate@ACTS23:~/cpp> vi refMemtwo.cpp
corporate@ACTS23:~/cpp> g++ refMemtwo.cpp
corporate@ACTS23:~/cpp> ./a.out
 in disp num: 100       &num: 0x7ffd47546bc4
 in disp num: 200       &num: 0x7ffd47546bc4
 in disp num: 200       &num: 0x7ffd47546bc4

 */




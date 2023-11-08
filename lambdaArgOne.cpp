

#include <iostream>

using namespace std;

int main(){
 auto fun = [] (int x, int y){return x + y;};
	cout<<"RES: "<<fun(10,20)<<endl;
}

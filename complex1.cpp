#include <iostream>
using namespace std;

/*Intro to friend function here
 *
 * */
class Complex{
	double real;
	double imag;


public:
	Complex (double r=0.0, double i=0.0): real(r), imag(i){}
	friend Complex& operator-(Complex&);
	friend Complex& operator++(Complex&);

	friend ostream& operator<<(ostream &, Complex &);

};
int main(){
	Complex a(10.234, 234.345);
	Complex b(12.234, 200.345);
	cout<<a <<endl;
	cout<<b <<endl;

	Complex res = -a;
	cout << res <<endl;
	res = ++b;
	cout << res <<endl;
}

Complex& operator-(Complex &num1){
	num1.real = -num1.real;
	return num1;
}
Complex& operator++(Complex &num1){
	num1.real += 1;
	return num1;
}

ostream& operator<<(ostream &out, Complex &obj){
	out<<obj.real<<" + i"<<obj.imag;
	return out;


}

/* Output
 * corporate@ACTS23:~/cpp/day6> vi complex1.cpp
corporate@ACTS23:~/cpp/day6> g++ complex1.cpp
corporate@ACTS23:~/cpp/day6> ./a.out
10.234 + i234.345
12.234 + i200.345
-10.234 + i234.345
13.234 + i200.345
*/

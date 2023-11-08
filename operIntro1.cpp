#include <iostream>
using namespace std;

class Complex{
	double real;
	double imag;
public:
	Complex (double r=0.0, double i=0.0): real(r), imag(i) {}
	friend Complex Add(Complex , Complex);
	friend Complex Sub(Complex , Complex);

	void print(){
		cout<<real <<"+ i"<<imag<<endl;
	}
};
 int main(){
	 Complex a(10.234, 234.345);
	 Complex b(12.234, 200.345);
	 a.print();
	 b.print();

	 Complex res = Add(a,b);
	 res.print();
	 res = Sub(a,b); //operator-(a, b)
	 res.print();
 }
Complex Add(Complex num1, Complex num2){
	Complex temp;
	temp.real = num1.real + num2.real;
	temp.imag = num1.imag + num2.imag;
	return temp;

}

Complex Sub(Complex num1, Complex num2){
	Complex temp;
	temp.real = num1.real - num2.real;
	temp.imag = num1.imag - num2.imag;
	return temp;
}


/* OutPut--->
 *
 * corporate@ACTS23:~/cpp/day6> vi operIntro1.cpp
corporate@ACTS23:~/cpp/day6> g++ operIntro1.cpp
corporate@ACTS23:~/cpp/day6> ./a.out
10.234+ i234.345
12.234+ i200.345
22.468+ i434.69
-2+ i34
*/

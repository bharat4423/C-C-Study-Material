#include <iostream>
using namespace std;

class Array{

	int size;
	int arr[20];

public:
	void print(){
		cout<<"Array: ";
		for(int i =0; i < size; ++i)
			cout<<arr[i]<<" ";
		cout<<endl;
	}

	void fill(int init = 101){
		for(int i=0; i < size; ++i)
			arr[i] = init + i;
	}

	Array(int sz = 20):size(sz){//default or single parameterized constructor 
		if (sz >= 20)	
		size = 20;
		 
		fill();
	
	}

	Array(int sz, int init){//two parameterized constructor
		size = sz;
		if(sz >= 20)
		size = 20;
		fill(init);
	}
};

int main(){
	Array one=30;
	one.print();

	Array two(15, 10001);
	two.print();
}


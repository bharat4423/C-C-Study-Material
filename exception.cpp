#include <iostream>

using namespace std;

int main(){
	int size;
	cout<<"Enter your Array Size:";
	cin>>size;

	int *arr = new int[size];
	for (int cnt = 0; cnt < size; ++cnt)
		arr[cnt] = cnt + 101;
	for (int cnt = 0; cnt < size; ++cnt)
		cout<<arr[cnt]<<" ";
		cout<<endl;
		delete []arr;
}

/*
 * corporate@ACTS23:~> vi exception.cpp
corporate@ACTS23:~> g++ exception.cpp
corporate@ACTS23:~> ./a.out
Enter your Array Size:10
101 102 103 104 105 106 107 108 109 110
corporate@ACTS23:~> ./a.out
Enter your Array Size:-10
terminate called after throwing an instance of 'std::bad_array_new_length'
  what():  std::bad_array_new_length
Aborted (core dumped)
corporate@ACTS23:~>
*/


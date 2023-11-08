#include <iostream>
#include <thread>
#include <atomic>
#include <chrono>
using namespace std;
#ifdef NUM
#define NUM 1000
#endif

atomic<int> var(0); //atomic operations -->

void doSomeJob(){
	for(int i = 0; i< NUM; ++i)
		var++;
}
int main(){
	cout<<"1....In Main "<<var<<endl;
	thread t1(doSomeJob);
	thread t2(doSomeJob);
	thread t3(doSomeJob);

	t1.join();
	t2.join();
	t3.join();

	cout<<"2 ...In main "<<var<<endl;
}


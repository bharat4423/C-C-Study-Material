#include <iostream>

using namespace std;


class Networking{
	public:
		Networking(){cout<<"Networking::Networking()"<<endl;}
		~Networking(){cout<<"Networking::~Networking()"<<endl;}
		void send(){cout<<"Networking::send()"<<endl;}
		void recv(){cout<<"Networking::recv()"<<endl;}
};

class Filesystem{
	public:
		Filesystem(){cout<<"Filesystem::Filesystem()"<<endl;}
       		~Filesystem(){cout<<"Filesystem::~Filesystem()"<<endl;}
		void read(){cout<<"Filesystem::read()"<<endl;}
		void write(){cout<<"Filesystem::write()"<<endl;}

};

class Streaming:public Filesystem, public Networking{
	public:
		Streaming(){cout<<"Streaming::Streaming()"<<endl;}
		~Streaming(){cout<<"Streaming::~Streaming()"<<endl;}
		void upload(){
			read();
			send();
		}
		void download(){
			recv();
			write();
		}
};

int main(){
	Streaming videos;
	videos.upload();
	//videos.download();
}


/*
 *OutPut--->

 corporate@ACTS23:~/cpp/day8> vi filesys.cpp
corporate@ACTS23:~/cpp/day8> g++ filesys.cpp
corporate@ACTS23:~/cpp/day8> ./a.out
Filesystem::Filesystem()
Networking::Networking()
Streaming::Streaming()
Filesystem::read()
Networking::send()
Streaming::~Streaming()
Networking::~Networking()
Filesystem::~Filesystem()

*/


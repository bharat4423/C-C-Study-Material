#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
	string lengthyword = "eighty five lakhs twenty seven thousand and six hundred forty nine";
	vector<string> words ;
	 
	int start, end ;
	start = end = 0;
	while(end != lengthyword.size()){
		if(lengthyword[end] == ' '){
			words.push_back(lengthyword.substr(start, end - start));
			start = end + 1;
		}
		end ++;
	}
	words.push_back(lengthyword.substr(start, end - start));
	for (auto one: words)
		cout<<one<<endl;

}
/* OutPut--->
 * corporate@ACTS23:~/cpp/day14> vi stringsplitter.cpp
corporate@ACTS23:~/cpp/day14> g++ stringsplitter.cpp
corporate@ACTS23:~/cpp/day14> ./a.out
eighty
five
lakhs
twenty
seven
thousand
and
six
hundred
forty
nine

*/

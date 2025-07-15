#include <iostream>
#include <string>

using namespace std;

string getOddNumber(string s){
	string largest;
	for(int i = s.length() -1; i >= 0; i--){
		if((s[i] - '0') % 2 == 1){
			return s.substr(0, i+1);
		}
	}

	return "";
}


int main(int argc, char* argv[]){
	cout << getOddNumber(argv[1]) << endl;
}

#include <iostream>
#include <string>

using namespace std;

bool rotateString(string s, string g){
	for(int i = 0;i<s.length();i++){
		char temp = s[0];
		for(int j = 0;j < s.length()-1;j++){
			s[j] = s[j+1];
		}
		s[s.length()-1] = temp;
		if(s == g) return true;
	}
	return false;
}


int main(int argc, char* argv[]){
	cout << (rotateString(argv[1], argv[2]) ? "true" : "false")  << endl;
}

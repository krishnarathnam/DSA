#include <iostream>
#include <string>

using namespace std;

string LongestPrefix(vector<string>& s){
	if (s.empty()) return "";
	string prefix = s[0];


	for(int i = 1;i < s.size();i++){
		int j = 0;
		while(j<prefix.length() && j<s[i].length() && prefix[j] == s[i][j]){
			j++;
		}

		prefix = prefix.substr(0,j);
		if(prefix.empty()) return "";
	}

	return prefix;
}

int main(int argc, char* argv[]){
	vector<string> input;
	for(int i = 1;i<argc;i++){
		input.push_back(argv[i]);
	}
	cout << LongestPrefix(input) << endl;
}

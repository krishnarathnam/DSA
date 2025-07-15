#include<iostream>
#include<string>
#include<unordered_map>


using namespace std;


int romanToInt(string s){
	unordered_map<char, int> roman = {
		{'I', 1}, {'V', 5}, {'X',10},
		{'L', 50}, {'C', 100},
		{'D', 500}, {'M', 1000}
	};

	int total = 0;

	for(int i = 0; i<s.length(); i++){
		int curr = roman[s[i]];
		int next = (i + 1 <s.length()) ? roman[s[i+1]] : 0;
		if(curr < next){
			total -= curr;
		} else {
			total += curr;
		}
	}

	return total;
}

int main(int argc, char* argv[]){
	cout << romanToInt(argv[1]) << endl;
	return 0;
}


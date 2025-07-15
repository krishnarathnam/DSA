#include <iostream>
#include <string>

using namespace std;

string reverseWords(string s){
	string trimmed;
	int i = 0;
	int n = s.length();

	while(i<n){
		while (i<n && s[i] == ' ') i++;

		while(i<n && s[i] != ' '){
			trimmed += s[i];
			i++;
		}

		while(i<n && s[i] == ' ') i++;
		if(i<n) trimmed += ' ';
	}

	int len = trimmed.length();
	int l =0, r = len-1;
	while(l<r){
		swap(trimmed[l], trimmed[r]);
		l++;
		r--;
	}

	i = 0;
	while( i < len){
		int start = i;
		while(i <len && trimmed[i] !=' ') i++;
		int end = i-1;

		while(start<end){
			swap(trimmed[start],trimmed[end]);
			start++;
			end--;
		}

		i++;
	}

	return trimmed;
}


int main (int argc, char* argv[]){
	string input = argv[1];
	string output = reverseWords(input);

	cout << "the answer is: " << endl;
	cout << output << endl;

	return 0;
}

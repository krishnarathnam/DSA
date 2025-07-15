#include <iostream>
#include <string>

using namespace std;

int maxDepth(string s){
	int maximum = 0;
	int current = 0;

	for(char ch : s){
		if(ch == '('){
			current++;
			maximum = max(maximum, current);
		} else if(ch == ')'){
			current--;
		}
	}

	return maximum;
}


int main(int argc, char* argv[]){
	cout<<maxDepth(argv[1])<<endl;
	return 0;
}

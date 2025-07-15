#include <iostream>
#include <string>

using namespace std;

string removeOuterP(const string s){
	string result;
	int depth = 0;

	for(char ch :s){
		if(ch == '('){
			if (depth > 0) result += ch;
			depth++;
		} else if (ch == ')'){
			depth--;
			if(depth > 0) result += ch;
		}
	}

	return result;
}

int main(int argc, char* argv[]) {
    if (argc != 2) {
        cout << "Usage: ./run \"(()())(())\"" << endl;
        return 1;
    }

    string input = argv[1];
    string output = removeOuterP(input);

    cout << "After removing outermost parentheses: " << output << endl;

    return 0;
} 

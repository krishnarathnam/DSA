#include <iostream>
#include <string>


using namespace std;

bool isAnagram(string s, string t){
	if(s.length() != t.length()) return false;

	int count[26] = {0};

	for(int i = 0;i<s.length();i++){
		count[s[i] - 'a']++;
		count[t[i] - 'a']--;
	}

	for(int i = 0;i<26;i++){
		if(count[i] != 0) return false;
	}

	return true;
}

int main(int argc, char* argv[]) {
    if (argc != 3) {
        cout << "Usage: ./a.out <string1> <string2>" << endl;
        return 1;
    }

    cout << (isAnagram(argv[1], argv[2]) ? "true" : "false") << endl;
    return 0;
}

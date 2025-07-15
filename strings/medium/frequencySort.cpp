#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;

string frequencySort(string s){
	unordered_map<char, int> list;
	
	for(char ch: s){
		list[ch]++;
	}

	vector<pair<char, int>> freq;

	for (auto p : list) {
		freq.push_back(p);
	}

	for (int i = 0;i<freq.size()-1;i++) {
		for (int j =0;j<freq.size()-i-1;j++) {
			if(freq[j].second < freq[j+1].second){
				swap(freq[j], freq[j+1]);
			}
		}
	}

	string result;
	for (auto p : freq) {
		result += string(p.second, p.first);
	}

	return result;
}

int main(int argc, char* argv[]){
	cout << frequencySort(argv[1]);
	return 0;
}

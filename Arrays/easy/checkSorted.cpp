#include <iostream>

using namespace std;

bool check(vector<int> nums){
	int count = 0;

	for(int i =0;i<nums.size();i++){
		if(nums[i] > nums[(i+1)%nums.size()]) count++;
	}

	return count <= 1;
}

int main(int argc,char* argv[]){
	vector<int> nums;
	string input = argv[1];
	for(char ch: input){
		nums.push_back(ch-'0');
	}

	cout << (check(nums) ? "true" : "false") << endl;
	return 0;
}

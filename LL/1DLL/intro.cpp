#include <iostream>
#include <vector>
using namespace std;

struct Node{
	int data;
	Node* next;
	Node(int d){
		data = d;
		next = NULL;
	}
};

Node* insertEnd(Node* root, int item){
	Node* temp = new Node(item);
	if(root == NULL)
		return temp;

	Node* last = root;
	while(last->next != NULL){
		last = last->next;
	}

	last->next = temp;
	return root;
}

Node* deleteNode(Node* root, int item){
	if(root = NULL)
		cout << "Nothing to delete" << endl;
		return temp;

	Node* temp = root;
	while(temp->next->data != item){
		temp = temp->next;
	}

	temp->next = temp->next->next;

	return temp;
}

Node* arrToList(vector<int> arr){
	Node* root = NULL;
	for(int i =0;i<arr.size();i++){
		root = insertEnd(root, arr[i]);
	}
	return root;
}

void display(Node* root){
	while(root != NULL){
		if(root->next != NULL){
			cout << root->data << "->";
		} else {
			cout<<root->data<<endl;
		}
		root = root->next;
	}

}

int main(){
	vector<int> nums = {1,2,3,4,5};
	Node* root = arrToList(nums);
	display(root);
	return 0;
}

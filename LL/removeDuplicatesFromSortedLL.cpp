#include<bits/stdc++.h>

using namespace std;
struct linkedList
{
	int data;
	struct linkedList *next;

	linkedList(int data){
		this->data = data;
		this->next = NULL;
	}

};

linkedList *get(std::vector<int> &v){
	linkedList *root = NULL;
	for(int x:v){
		if(root == NULL){
			root = new linkedList(x);
			continue;
		}
		linkedList *temp = root;
		while(temp->next != NULL)temp = temp->next;
		 temp->next= new linkedList(x);
		
		
	}
	return root;
}
void print(linkedList *head){
	while(head != NULL){
		cout<<head->data<<" ";
		head = head->next;
	}
	cout<<"\n";
}

void removeDuplicates(linkedList *head){

	
	while(head != NULL){
		int temp = head->data;

		linkedList *nextDisticnt = head;
		while(nextDisticnt != NULL and temp == nextDisticnt->data)nextDisticnt=nextDisticnt->next;
		head->next = nextDisticnt;
		head = nextDisticnt;


	}





}




int main(){

	std::vector<int> v = {9,9};
	linkedList *root = get(v);
	removeDuplicates(root);
	print(root);



}
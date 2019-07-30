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


linkedList * reverse(linkedList *head){

	linkedList *prev = NULL,*curr = head, *fwd;
	while(curr != NULL){
		fwd = curr->next;
		curr->next = prev;
		prev = curr;
		curr = fwd;
	}
	return prev;




}






int main(){

	std::vector<int> v = {4,2,5};
	linkedList *root = get(v);
	print(reverse(root));



}
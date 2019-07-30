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


bool isPalindrome(linkedList *root , linkedList ** head){

	if(root == NULL)return true;

	bool temp = isPalindrome(root->next,head);
	temp &=(root->data == (*head)->data);
	(*head)=(*head)->next;
	return temp;



}




int main(){

	std::vector<int> v = {9,8,9};
	linkedList *root = get(v);


	linkedList *temp = root;
	cout<<isPalindrome(temp,&temp);



}
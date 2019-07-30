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

linkedList * addone(linkedList *head){

	linkedList *lastnine=head;
	linkedList *crawl=head;

	while(crawl != NULL){
		if(crawl->data == 9){
			crawl=crawl->next;
		}
		else{
			while(crawl != NULL and crawl->data != 9)crawl=crawl->next;
			lastnine = crawl;
		}
	}
	crawl = head;
	if(lastnine == NULL){
		while(crawl != NULL and crawl->next != NULL){
			crawl = crawl->next;
		}	
		crawl->data+=1;
		return head;


	}
	else if (lastnine == head){
		
		while(crawl != NULL)crawl->data =0,crawl = crawl->next;
		linkedList *temp = new linkedList(1);
		temp->next = head;
		return temp;



	}
	else {
		while(crawl->next != lastnine){
			crawl = crawl->next;
		}
		crawl->data+=1;
		crawl = crawl->next;
		while(crawl != NULL){
			crawl->data  =0;
			crawl = crawl->next;
		}
		return head;
	}









}


int main(){

	std::vector<int> v = {9,9};
	linkedList *root = get(v);
	print(root);
	print(addone(root));




}
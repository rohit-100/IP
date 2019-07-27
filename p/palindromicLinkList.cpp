

// is not checked but it seems to be correct


bool isPalindrome(Node *head)
{
        return ff(head,head,&head);
}
bool ff(Node *prev,Node *per,Node **head){
    bool ans =true;
    if(prev!=NULL)ans = ff(prev->next,per->next,head);
    if(per->data == (*head)->data){
        *head = (*head)->next;
        if(ans=true)return true;
        return false;
    }
    return false;
}

Node *removeDuplicates(Node *head)
{
    Node *prev = head;
    Node *curr = head->next;
    while (curr!=NULL)
    {
        if(curr->data == prev->data)
        {
            curr=curr->next;
        }
        else
        {
            prev->next=curr;
            prev=curr;
            curr=curr->next;
            
        }
    }
    prev->next=NULL;
    return head;
}

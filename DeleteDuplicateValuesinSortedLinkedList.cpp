/*
  Remove all duplicate elements from a sorted linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* RemoveDuplicates(Node *head)
{
  // This is a "method-only" submission. 
  // You only need to complete this method.
    Node *head1 = head;
    Node * curr = head;
    if(head == NULL)
        return NULL;
    else
    {
        while(curr->next!=NULL)
        {
            Node * temp = curr->next;
            while(curr->data == temp->data && temp->next!=NULL) 
                temp = temp->next;
            curr->next = temp;
            curr = temp;
            if(head->data == head->next->data)
                head->next =NULL;
        }
    }
    return head1;
}

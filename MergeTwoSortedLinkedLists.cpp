/*
  Merge two sorted lists A and B as one linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* MergeLists(Node *headA, Node* headB)
{
     // This is a "method-only" submission. 
  // You only need to complete this method 
    Node * res = NULL;
    if(headA ==NULL && headB ==NULL)
        return res;
    if(headA == NULL)
        return headB;
    else if(headB == NULL)
        return headA;
    else
    {
        if(headA->data <= headB->data)
        {
            res = headA;
            res->next = MergeLists(headA->next,headB);
        }
        else
        {
            res = headB;
            res->next = MergeLists(headA,headB->next);
        }
    }
    return res;
}

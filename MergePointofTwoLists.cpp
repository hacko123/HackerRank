/*
   Find merge point of two linked lists
   Node is defined as
   struct Node
   {
       int data;
       Node* next;
   }
*/
int FindMergeNode(Node *headA, Node *headB)
{    
    // Complete this function
    // Do not write the main method. 
    int c1=0,c2=0;
    Node * tempA = headA;
    Node * tempB = headB;
    while(tempA!=NULL)
    {
        tempA = tempA->next;
        c1++;
    }
    while(tempB!=NULL)
    {
        tempB = tempB->next;
        c2++;
    }
    if(tempA != tempB)
        return -1;
    int c = abs(c1-c2);
    if(c1 > c2)
    {
        tempA = headA;
        for(int i=0;i<c;i++)
            tempA = tempA->next;
        tempB = headB;
        while(tempA != tempB)
        {
            tempA=tempA->next;
            tempB=tempB->next;
        }
        return tempA->data;
    }
    else if(c2 > c1)
    {
        tempB = headB;
        for(int i=0;i<c;i++)
            tempB = tempB->next;
        tempA = headA;
        while(tempA != tempB)
        {
            tempA=tempA->next;
            tempB=tempB->next;
        }
        return tempA->data;
    }
    else
    {
        tempA = headA;
        tempB = headB;
        while(tempA != tempB)
        {
            tempA=tempA->next;
            tempB=tempB->next;
        }
        return tempA->data;
    }
}

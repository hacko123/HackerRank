/*
  Detect loop in a linked list 
  List could be empty also
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int HasCycle(Node* head)
{
   // Complete this function
   // Do not write the main method
   if(head == NULL || head->next == NULL || head->next->next ==NULL)
       return 0;
   else
   {
       Node * slow = head;
       Node * fast = head;
       while(slow != NULL && fast != NULL && fast->next!=NULL)
       {
           slow = slow->next;
           fast = fast->next->next;
            if(slow == fast)
            return 1;
       }
       return 0;
   }
}

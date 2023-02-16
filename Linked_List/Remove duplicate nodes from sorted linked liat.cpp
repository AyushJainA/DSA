Node *uniqueSortedList(Node *head) {
  // Write your code here.
  if(head == NULL){return NULL;}
  Node *curr = head;
 if(head -> next == NULL){return head;}
 

  while(curr->next != NULL){
      if((curr->next != NULL) &&curr->data == curr->next->data){
           Node *temp = NULL;
          temp = curr-> next;
         curr->next = curr->next->next;
         delete temp;
      }
    if(curr-> next == NULL){break;}
      if(curr->data != curr->next->data){ curr = curr->next; }
  } return head;
}

Node *removeDuplicates(Node *head)
{ if(head==NULL){return head;}
    // Write your code here
    Node* curr = head;
    Node* prev = head;
    Node* forward = head;
   
    map<int,bool> visit;

    while(curr != NULL ){
        // if true hai
        if(visit[curr->data] == true){
            //node delete ka code
            forward = curr->next;
            curr->next = NULL;
            Node* temp = curr;
            prev->next = forward;
            curr=forward;
            delete temp;

        }

        if(curr==NULL){break;}
        // not false neither true--> at all true nahi hai

        if(visit[curr->data] != true ){visit[curr->data] = true; prev = curr; curr=curr->next;}

    } return head;
}

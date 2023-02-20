/********************************************************************

    Following is the representation of the Singly Linked List Node:

    class node{
        public:
            int data;
            node * next;
            node(int data){
                this->data=data;
                this->next=NULL;
            }
    };
    
********************************************************************/
node* midp(node* head){
    node* slow = head;
    node* fast = head->next;
    while(fast != NULL && fast ->next != NULL){
        slow= slow -> next;
        fast = fast ->next ->next;
    }

return slow;
}

node* merge(node* left , node* right){

    if(left == NULL){return right ;}
    if(right == NULL){return left ; }

    node* start = new node(-1);
    node* temp = start;
    
    while(left != NULL && right != NULL){
        if( left -> data <= right ->data){
            temp -> next = left ;
            temp = left;
            left = left -> next;
        }

        else{
            temp -> next = right ;
            temp = right ;
            right = right -> next ;
        }
    }

while(left != NULL){
    temp -> next = left;
    temp = left;
    left = left->next ;
}

while(right != NULL){
    temp->next = right;
    temp = right ;
    right = right->next ;
} 

start = start -> next ;
return start ;
}

node* mergeSort(node *head) {
    // base case 
    if(head == NULL || head->next == NULL){
        return head;
    }

    //find mid
    node* mid = midp(head);

    //divide left and right
    node* left = head;
    node* right = mid->next;
    mid -> next = NULL;


    //recursive call 
    left = mergeSort(left);
    right = mergeSort(right);

    // merge left right 
    node* result = merge(left , right); 

    return result;


}

#include <bits/stdc++.h> 
/****************************************************************
    Following is the Linked List node structure

    class Node
    {
    public:
        int data;
        Node *next;
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/


Node* kReverse(Node* head, int k) {
    Node* prev = NULL;
    Node* next = head;
    Node* curr = NULL;

    // base case 
    if(head == NULL){
        return NULL;
    }

    //main case 
    int cnt = 0;
    while( cnt < k && curr != NULL){
        next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = next; 
        cnt++;

    }
    //recursion kr lega ab
    if(next != NULL){
        head -> next = kReverse(next,k);
    }
    return prev;

}

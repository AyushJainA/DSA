#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next; // ye ek pointer hai node me next type ka jo ki next node li posotion btata hai

    //constructor
    node(int data)
    {
        this->data = data; // node ek pointer hai too node k data me data input kr diya
        this->next = NULL;
    }
};

void print(node* &head){  // int* mtlv int ka pointer , node* = node ka pointer , & for not making copy
    node* temp = head;
    //if( temp==null ){cout<<"Empty";}
    while( temp != NULL) {
        cout << temp -> data <<" ";
        temp = temp -> next;
    } cout<< endl;
}

void insertAtHead(int d, node* &head){
    node* temp = new node(d);
    temp ->next = head;
    head = temp;

}

void insertAtTail(int d, node* &head){
    node* temp = new node(d);
    node* tail =head;
    while(tail->next != 0){
        tail = tail->next;
    }
    if(tail->next == NULL){
        tail->next = temp;
    }

}

void insertAtMid(int d , node* &head,int n){
    if( n==1 ){
        insertAtHead(d, head);
        return;
    }

    node* temp = new node(d);
    node* mid=head;
    for(int i=0;i<n-2;i++){
        mid = mid -> next;
    }
    node* tp = mid->next;
    mid->next= temp;
    temp->next = tp;
}

void delNode(int n, node* &head){
    if(n==1){
        node* curr= head;
        head = head->next;
        delete curr;
    }
    else{
        node* curr= head;
        node* prev= NULL;
        for(int i =0 ;i<n-1;i++){
            prev = curr ;
            curr = curr->next;

        }
        node* tem= curr->next;
        curr->next = NULL;
        prev->next = tem;
        delete curr;

    }
}



int main()
{

    node* node1 = new node(25); // created dynamically 
    // cout << node1 -> data << endl;
    // cout << node1 -> next << endl;
    node* head = node1;
    print(head);
   
    insertAtHead(50,head);
    print(head);

    insertAtHead(75,head);
    print(head);

    insertAtTail(100,head);
    print(head);

    insertAtTail(125,head);
    print(head);

    insertAtMid(150,head,3);
    print(head);

    insertAtMid(175,head,2);
    print(head);

    insertAtMid(200,head,1);
    print(head);

    delNode(1,head);
    print(head);

    delNode(3,head);
    print(head);

    

    return 0;
}

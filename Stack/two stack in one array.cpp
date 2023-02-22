#include <bits/stdc++.h> 
class TwoStack {
  // stack 1 left to right 
  //stack 2 right to left 
  
        int *arr ; // dynamin initalization

// koi bhi class me esa element ho like array vector too *arr kr ke pointer bna lenge 

        int top1 ;
        int top2;
        int size ;
public:

    // Initialize TwoStack.
    TwoStack(int s) {
        // Write your code here
        arr = new int[s];
        top1 = -1;
        top2 = s;
        this->size = s; // twostack ka size s ho jaye 
        // esne twostack.size() ko bnaya hai .
    }
    
    // Push in stack 1.
    void push1(int num) {
        
        if(top2-top1>1 ){
            // true 
            top1++;
            arr[top1] = num;
        }
        
    }

    // Push in stack 2.
    void push2(int num) {
       
        if(top2-top1 > 1){
            top2--;
            arr[top2] = num;
        }
       
    }

    // Pop from stack 1 and return popped element.
    int pop1() {
        
        if(top1 == -1){return -1;}
        int temp = arr[top1];
        
        top1--;
        return temp;
    }

    // Pop from stack 2 and return popped element.
    int pop2() {
        
        if(top2 > size-1){return -1;}
        int temp = arr[top2];
       
        top2++;
        return temp;
    }
};

/* Tree node structure  used in the program

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

class Solution {
  public:
    // Function to return the diameter of a Binary Tree.
    
    pair<int,int> dd(Node* root ){
        
        if(root==NULL){
            pair<int,int> temp ={0,0};
            return temp;}
            
        pair<int,int> left = dd(root->left);
        pair<int,int> right = dd(root->right);
        
        int a1 = left.first;
        int a2 = right.first;
        int a3 = left.second + right.second +1;
        
        pair<int,int>ans ;
        ans.first = max(a1,max(a2,a3));
        ans.second = max(left.second,right.second) +1;
        
        return ans;
        
        
        
    }
    
    int diameter(Node* root) {
        // Your code here
        return dd(root).first;
    }
};

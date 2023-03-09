#include <bits/stdc++.h>
class Solution {
    vector<int> nextelements(vector<int> heights,int n){
        vector<int> ans(n);
        stack<int> s;
        s.push(-1);
        for(int i = n-1; i>=0; i--){
            int curr = heights[i];
            while( s.top() != -1 && heights[s.top()] >=curr ){
                s.pop();
            }
            ans[i] = s.top();
            s.push(i);
        }
        return ans;

    }

    vector<int> prevelements(vector<int> heights,int n){
        stack<int> s;
        s.push(-1); 
    vector<int> ans(n);
        
    for(int i =0 ;i<n; i++){
        int curr = heights[i];
        while( s.top() != -1 && heights[s.top()] >= curr ){
                s.pop();
            }

        ans[i] = s.top();
        s.push(i);
    }    
    return ans;
    }


public:
    int largestRectangleArea(vector<int>& heights) {
        int area = INT_MIN;
        int n = heights.size();

        vector<int> next(n);
        next = nextelements(heights,n);

        vector<int> prev(n);
        prev = prevelements(heights,n);
        
        for(int i =0; i<n; i++){
            int l = heights[i];
            if(next[i] == -1){ next[i]=n; }
            int b = next[i] - prev[i] - 1;

            int newarea = l*b;
            if(newarea>area){area = newarea;}
        } 
        
        return area;
    }
};

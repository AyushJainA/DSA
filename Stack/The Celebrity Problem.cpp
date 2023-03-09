class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here 
        stack<int>s;
        for(int i= 0;i<n ;i++){s.push(i);}
    //2 
    while(s.size()>1){
        int a = s.top();
        s.pop();
        int b =s.top();
        s.pop();
        if(M[a][b]==1){s.push(b);}
        else{s.push(a);}
    }
    int ans = s.top();
    // now s.top may have chance 
    bool row = true;
    bool col = false;
    int cnt = 0;
    for(int i =0;i<n;i++){
        if(M[ans][i]==1){row = false;}
        if(M[i][ans]==1){cnt++;}
    }
    if(cnt==n-1){col=true;}
    
    if(row==true && col == true){return ans;}
    return -1; }
};

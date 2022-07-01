// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution
{
    public:
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        // code here.. 
        vector<int> v;
        vector<int> ans;
        while(!s.empty()){
            int t = s.top();
            s.pop();
            v.push_back(t);
        }
    //   reverse(v.begin(),v.end());
        int size = v.size();
        int mid = ceil(size/2);
        
        for(int i = 0;i<mid;i+=1){
            ans.push_back(v[i]);
            
           
        }
        for(int i=mid;i<size-1;i++){
            v[i] = v[i+1];
            ans.push_back(v[i]);
        }
       
        for(int i =0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        int sizeOfStack;
        cin>>sizeOfStack;
        
        stack<int> myStack;
        
        for(int i=0;i<sizeOfStack;i++)
        {
            int x;
            cin>>x;
            myStack.push(x);    
        }

            Solution ob;
            ob.deleteMid(myStack,myStack.size());
            while(!myStack.empty())
            {
                cout<<myStack.top()<<" ";
                myStack.pop();
            }
        cout<<endl;
    }   
    return 0;
}
  // } Driver Code Ends
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*
The structure of the class is as follows
class _stack{
stack<int> s;
int minEle;
public :
    int getMin();
    int pop();
    void push(int);
};
*/

class Solution{
    int minEle;
    stack<int> s;
    public:
    
       /*returns min element from stack*/
       int getMin(){
           
           if(s.empty())
           {
            return -1;
           }
            else{
                return minEle;
            }
       }
       
       /*returns poped element from stack*/
       int pop(){
           
            if(s.empty()){
               return -1;
           }
           if(s.top()>= minEle){
               int element = s.top();
               s.pop();
               return element;
           }
           else{
               int ans = minEle;
               int val = 2 * minEle - s.top();
               minEle = val;
               s.pop();
               return ans;
           }

       }
       
       /*push element x into the stack*/
       void push(int x){
           if(s.empty())
           {
               s.push(x);
               minEle = x;
               return;
           }
           else
           {
               if(x<minEle)
               {
                   int val = 2*x-minEle;
                   s.push(val);
                   minEle = x;
                   return;
               }
               else
               {
                   s.push(x);
                   return;
               }
           }
           //Write your code here
       }
};

//{ Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int q;
        cin>>q;
        Solution ob;
        while(q--){
           int qt;
           cin>>qt;
           if(qt==1)
           {
              //push
              int att;
              cin>>att;
              ob.push(att);
           }
           else if(qt==2)
           {
              //pop
              cout<<ob.pop()<<" ";
           }
           else if(qt==3)
           {
              //getMin
              cout<<ob.getMin()<<" ";
           }
       }
       cout<<endl;
    }
    return 0;
}

// } Driver Code Ends
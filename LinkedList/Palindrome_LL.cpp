//{ Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};




// } Driver Code Ends
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution{
  public:
    //Function to check whether the list is palindrome.
    
        Node* findMiddle(Node* head){
        Node* curr = head;
        // here cur is the slow pointer, head is the fast pointer
        // we move slow ptr by 1 step, and the fast pointer by 2 steps
        while(head){
            curr = curr->next;
            head = head->next;
            if(head)
                head = head->next;
        }
        // fast is null. so slow must be at the middle of the list. return slow (aka cur)
        return curr;
    }
    
    Node * reverseLL(Node * head)
    {
        Node* prev = NULL;
        Node * next = NULL;
        Node * curr = head;
        while ( curr !=NULL)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    bool isPalindrome(Node *head)
    {
        //Your code here
        if( head == NULL || head->next == NULL)
        {
            return true;
        }
        
        Node * mid = findMiddle(head);
        Node *p1 = head;
        Node * p2 = reverseLL(mid);
        while ( p2 != NULL)
        {
            if(p1->data != p2->data)
            {
                return false;
            }
            p1 = p1->next;
            p2 = p2->next;
        }
        return true;
    }
};



//{ Driver Code Starts.
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {
        
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
   	cout<<obj.isPalindrome(head)<<endl;
    }
    return 0;
}


// } Driver Code Ends
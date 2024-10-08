
//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
       if(head==NULL || head->next==NULL)
       {
           return false;
       }
       Node* slow=head;
       Node* fast=head;
       while(fast!=NULL && fast->next!=NULL)
       {
           slow=slow->next;
           fast=fast->next->next;
           if(slow==fast) return true;
       }
       return false;
    }
};

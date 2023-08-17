#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};


class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
        if(head == NULL || head-> next == NULL)
        {
            return head;
        }
        Node * prev = NULL;
        Node * curr = head;
        while(curr!= NULL)
        {
            Node * forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }
        return prev;
    }
    
};
    
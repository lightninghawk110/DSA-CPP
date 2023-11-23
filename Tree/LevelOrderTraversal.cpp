#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};
node *treecreator(node *root)
{
    cout << "Enter data: ";
    int data;
    cin >> data;
    root = new node(data);
    if (data == -1)
        return NULL;
    cout << "Data for left";
    root->left = treecreator(root->left);
    cout << "Data for right";
    root->right = treecreator(root->right);
    return root;
}
void levelorderTraversal(node *root)
{
    queue<node *> q;
    q.push(root);
    while(!q.empty())
    {
        node* temp = q.front();
        cout << temp->data;
        q.pop();
        if( temp->left)
        {
            q.push(temp->left);
        }
        if(temp->right)
        {
            q.push(temp->right);
        }

    }
}

//using vector -- GFG code
 vector<int> levelOrder(node* n)
    {
      node * temp;
      queue <node *> q;
      vector<int> v;
      q.push(n);
      while(!q.empty())
      {
          temp = q.front();
          q.pop();
          v.push_back(temp->data);
          if(temp->left)
          {
              q.push(temp->left);
          }
          if(temp->right)
          {
              q.push(temp->right);
          }
      }
      
      return v;
      
    }
int main()
{
    node *root = NULL;
    root = treecreator(root);
    levelorderTraversal(root);
}
#include<iostream>




using namespace std;
// Each node has pointers for the next left and right child node
struct Node{

  Node *left;
  int data;
  Node *right;

  Node(int data1)
  {
    left = right = NULL;
    data = data1;
  }
  
};
/*
// Left Root Right
InOrder(Node* node)
{
  Node* root = node;
  if(node == NULL)  
    return;

  node = node->left;

  cout<<node->data<<endl;
  cout<<root->data<<endl;
  
  InOrder(node);
  

}*/

int dfsHeight(Node* root)
{
  if(root == NULL)
    return 0;
  int lh = dfsHeight(root->left);
  if(lh == -1)
      return -1;
  int rh = dfsHeight(root->right);
  if(rh == -1)
    return -1;
  
  if(abs(lh-rh) > 1)
    return -1;

  return max(lh, rh)+1;
}

bool isBalanced(Node* root)
{
  return dfsHeight(root)!=-1; 
}


int maxDepth(Node* root)
{
  
  if(root == NULL)
    return 0;
  // Count levels in the left hand side of the tree
  int lh = maxDepth(root->left);
  // Count levels in the right hand side of the tree
  int rh = maxDepth(root->right);

  // Return the max of these heighs
  
  return 1+max(lh,rh);
}

// Left Root Right traversal of the node
void inOrder(Node *root)
{

  // If the node is NULL return
  if(root == NULL)
    return;
  // traverse left of the node
  inOrder(root->left);
  
  //Print the data in the current node
  cout<<root->data<<endl;
  
  // traverse right of the node
  inOrder(root->right);
}

//Left Right Root Traversal of the node
void postOrder(Node *root)
{

  // If the node is NULL return
  if(root == NULL)
    return;

  // Travesel the left of the node
  postOrder(root->left);
  // Traverse the right of the node
  postOrder(root->right);
  // Print the data of the current node
  cout<<root->data<<endl;
  
}
// Root Left Right Traversal of the node
void preOrder(Node *node)
{

  // If the node is NULL return
  if(node == NULL)
    return ;
  // Print the data of the current node
  cout<<node->data<<endl;
  // Traverse through the left side of the node
  preOrder(node->left);
  // Traverse through the right side of the node
  preOrder(node->right);
}
int main()
{
  Node * root = new Node(1);
  root->left = new Node(2);
  root->right = new Node(3);
  root->left->right = new Node(4);
  root->left->left = new Node(5);
  
  cout<<"PreOrder Traversal of the tree is "<<endl;
  preOrder(root);

  cout<<"PostOrder Traversal of the tree is "<<endl;
  postOrder(root);

  cout<<"InOrder Traversal of the tree is "<<endl;
  inOrder(root);

  cout<<"Max depth of the tree is "<<maxDepth(root);

  if(isBalanced(root))
    cout<<"The tree is balanced"<<endl;
  else
    cout<<"The tree is not balanced"<<endl;
  return 0;
}

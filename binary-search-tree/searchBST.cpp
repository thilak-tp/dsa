#include<iostream>
// To find the min and max element in the given BST
using namespace std;

class TreeNode {
public:
  int data;
  TreeNode *right;
  TreeNode *left;
  TreeNode(int val)
  { 
    data = val;
    right = NULL;
    left = NULL;
  }

};
// A function to check if the given val is present in the tree or not
TreeNode* searchBST(TreeNode *node, int val)
{
  while(node != NULL && node->data != val)
  {
     node = val < node->data ? node->left: node->right;
  }
  
  if(node == NULL)
  { 
    cout<<"doestnt Exists"<<endl;
  }

  return node;
}

int main()
{
  
  TreeNode *root = new TreeNode(5);
  root->right = new TreeNode(6);
  root->left = new TreeNode(4);
  root->right->right = new TreeNode(7);
  root->right->left = new TreeNode(3);
  root->left->left = new TreeNode(2);
  root->left->right = new TreeNode(8);

  int val ;
  cout<<"Enter a value to search in the given BST"<<endl;
  cin>>val;
  
  TreeNode * resultNode = searchBST(root, val);
  if(resultNode == NULL)
    cout<<"The node was not found"<<endl;
  else
    cout<<"The node was found: "<<resultNode->data;
  

  return 0;
}



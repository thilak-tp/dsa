#include<iostream>

using namespace std;

struct stackNode{
  int data;
  stackNode *next;
  int size;

  stackNode(int number){
    data = number;
    next = NULL;
    size = 0;
  }

};

struct stack{
  stackNode * top;
  int size;
  stack()
  {
    top = NULL;
    size = 0;
  }
  
  void stackPush(int number)
  {
    stackNode * element = new stackNode(number);
    element -> next = top;
    top = element;
    cout<<"Element is pushed"<<endl;
    size++;
  }

  int stackPop()
  {
    int element = top->data;
    stackNode * temp = top;
    top = top -> next;
    delete temp;
    size--;
    return element;
  }

  int stackSize()
  {
     return size;
  }
  
  bool isEmpty()
  {
    return top ==NULL;
  }

  int stackPeek()
  {
    if(top == NULL) return -1;
    return top->data;
  }
  
  void printStack()
  {
    stackNode* current = top;
    while( current != NULL)
    {
      cout<< current->data<<" ";
      current = current -> next;
    }
    cout<<endl;
  }
};

int main()
{
  stack s;
  s.stackPush(10);
  s.stackPush(20);
  s.stackPush(30);
  s.stackPush(40);
  s.stackPush(50);
  s.stackPush(60);
  s.printStack();
  cout<<s.stackPop()<<" has been popped!"<<endl;
  cout<<s.stackPop()<<" has been popped!"<<endl;
  s.printStack();
  
}

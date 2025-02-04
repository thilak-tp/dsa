#include<iostream>

using namespace std;

struct queueNode{
  int data;
  queueNode *next;
  int size;

  queueNode(int number){
    data = number;
    next = NULL;
    size = 0;
  }

};

struct queue{
  queueNode * front;
  queueNode * rear;
  int size;
  
  queue()
  {
    front = NULL;
    rear = 0;
  }
  
  void queuePush(int number)
  {
    queueNode * element = new queueNode(number);

    if(element == NULL)
      cout<<"The Queue is full"<<endl;
    else if(front == NULL)
    {
      front = element;
      rear = element;
    }

    else 
    {
      rear->next = element;
      rear = element;
    }
    cout<<"Element is pushed"<<endl;
    size++;
  }

  void queuePop()
  {
    if(front == NULL)
    {
      cout<<"Queue is empty"<<endl;
    }
    else
    {
      cout<<front->data<<" Removed from queue"<<endl;
      queueNode *temp = front;
      front = front -> next;
      delete temp;
      size--;
    }
  }

  int queueSize()
  {
     return size;
  }
  
  bool isEmpty()
  {
    return front ==NULL;
  }

  int queuePeek()
  {
    if(front == NULL) return -1;
    return front->data;
  }
  
  void printQueue()
  {
    queueNode* current = front;
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
  queue s;
  s.queuePush(10);
  s.queuePush(20);
  s.queuePush(30);
  s.queuePush(40);
  s.queuePush(50);
  s.queuePush(60);

  s.printQueue();
  s.queuePop();
  s.queuePop();

  s.printQueue();
  return 0; 
}

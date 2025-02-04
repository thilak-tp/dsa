#include<iostream>

using std::cout;
using std::cin;
using std::endl;


class queue{
  public:
  int *arr;
  int size;
  int front;
  int rear;
  int count;

  queue()
  {
    front = rear = -1;
    size = 10;
    arr = new int[size];
    count = 0;
  }

  void Push(int number)
  {
    if(rear == -1)
    {
      front=0;
      rear=0;
    }   
    else
      rear = (rear+1)%count;

    if(count == size)
    {
      cout<<"The Queue is full";
      return;
    }
    count++;
    arr[rear] = number;
 
  }
    
  int Pop()
  {
    if(front == -1)
      cout<<"Queue is empty"<<endl;

    int element = arr[front];
    front++;
    if(count == 1)
    {  
      front = -1;
      rear = -1;
    }
    else
    front = (front + 1) % size;
    count--;
    return element;
  }

  int Top()
  {
    if(front == -1)
     {
        cout<<"The Que is empty"; 
        exit(1);
     }
    return arr[front];
  }

  int Size()
  {
    return count;
  }

};

int main()
{
   queue q; 
   q.Push(1);
   q.Push(2);
   q.Push(3);
   q.Push(4);
   q.Push(5);
    
  cout<<"The queue is "<<endl;
  for(int i=q.front; i<q.rear; i++)
  {
       cout<<q.arr[i]<<endl;
  }

  return 0;
}

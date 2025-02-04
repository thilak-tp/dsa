#include<iostream>

using std::cout;
using std::cin;
using std::endl;

// To implement stack using arrays
class stack{

  public:
  int size;
  int *arr;
  int top;
  

  
  stack()
  {
    top = -1;
    size = 1000;
    arr = new int[size];
  }

  void Push(int number)
  {
    top++;
    arr[top] = number;
  }

  int Pop()
  {
    int number = arr[top];
    top--;
    return number;
  }

  int Top()
  {
    return arr[top];
  }

  int Size()
  {
    return top+1;
  }
  
  int IsEmpty()
  {
    return top == -1;
  }  
};

int main(){
  
  stack s;

  s.Push(2);
  s.Push(20);
  s.Push(20);
  s.Top();
  int size = s.Size();

  cout<<"The stach is :"<<endl;
  for(int i=0; i<size; i++)
    cout<<s.arr[i]<<endl;
  
  cout<<"The top element in the stack is "<<s.Top()<<endl;
  cout<<s.Pop()<<" element was popped from the stack, now the stack is"<<endl;
  for(int i=0; i<s.Size(); i++)
    cout<<s.arr[i]<<endl;;
  
  return 0;
}

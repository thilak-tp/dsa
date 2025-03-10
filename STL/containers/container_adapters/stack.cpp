#include<iostream>
#include<stack>

using namespace std;

int main()
{
  stack<int> st;
  
  // Adding elements into the stack;
  st.push(1);
  st.push(2);
  st.push(3);
  st.push(4);
  st.push(5);
  
  cout<<"The top most element of the stack is "<<st.top()<<endl; 

  // Poping the last inserted element from the stack  
  st.pop();
  cout<<"After popping the stacks top element is "<<st.top()<<endl;

  // Printing the size of the stack
  cout<<"The size of the stack is "<<st.size()<<endl;
  // Checking if the stack is empty or not 
  if(st.empty())
    cout<<"The stack is empty!"<<endl;
  else
    cout<<"The stack is not empty!"<<endl;

  return 0;  
}

#include<iostream>
#include<queue>

using namespace std;

int main()
{

  // Declaring a queue
  queue <int> q;

  // To push the elements into the queue
  q.push(1);
  q.push(2);
  q.push(3);
  q.push(4);
  q.push(5);
  q.push(6);

  //To print the first element of the queue
  cout<<"The first element of the queue is "<<q.front()<<endl;

  // To print the last element of the queue
  cout<<"The last element of the queue is "<<q.back()<<endl;

  // Removing elements from the front of the queue
  q.pop();
  cout<<"After poping the first element of the queue is "<<q.front()<<endl;  

  // Printing the size of queue
  cout<<"The size of the queue is "<<q.size()<<endl;
  return 0;
}

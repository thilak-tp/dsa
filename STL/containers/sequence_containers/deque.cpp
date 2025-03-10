#include<iostream>
#include<deque>

using namespace std;

int main()
{
  deque<int> g;
  
  // Inserting an element into the deque
  cout<<"Inserting element into the deque"<<endl;
  g.push_back(1);
  g.push_back(2);
  
  cout<<"After the operator, the queue is "<<endl;
  for(auto it: g)
    cout<<it<<" ";

  //inseting an element at the fron of the deque
  g.push_front(10);

  
  cout<<"After the operator, the queue is "<<endl;
  for(auto it: g)
    cout<<it<<" ";

  cout<<"The size of the queue is "<<g.size()<<endl;

  //Removing the end of the queue
  g.pop_back();

  cout<<"After the operator, the queue is "<<endl;
  for(auto it: g)
    cout<<it<<" ";

  // Delete element from the front of the queue
  g.pop_front(); 


  cout<<"After the operator, the queue is "<<endl;
  for(auto it: g)
    cout<<it<<" ";
  return 0;
}

#include<iostream>
#include<set>
#include<unordered_set>

using namespace std;

int main()
{
  // Each element is the set is unique and is sorted in order
  //Declaring a set
  set <int> st = {5,2,3,3,4,5,6,2,3,10};


  // Printing all the members of the set
  for(auto it: st)
    cout<<it<<" ";
  cout<<endl;
  // To check if the set if empty or not
  if(st.empty())
    cout<<"The set is empty"<<endl;
  else
    cout<<"The set is not empty"<<endl;  
  
  //To print the size of the set
  cout<<"The size of the set is "<<st.size()<<endl;

    
  unordered_set <int> unord = {1,2,23,1,232,2,3,7,5};
  cout<<"The elements in the undordered set are"<<endl;
  for(auto it: unord)
    cout<<it<<" ";

  cout<<endl;
  return 0;
}

#include<iostream>
#include<vector>

using namespace std;

int main()
{
  // Declaring and initializing a vector
  vector <int> arr{2,3,5,1,2,4};

  cout<<"The values in the is "<<endl;
  for(auto it: arr)
    cout<<it<<" ";

  // Add elements into the vector:
  arr.push_back(10);
  
  cout<<"After adding an element, the array is"<<endl;
  
  for(auto it: arr)
    cout<<it<<" ";
  
  // Removing the last element of the array
  arr.pop_back(); 

  cout<<"After poping an element from the back, the array is "<<endl;
  
  for(auto it: arr)
    cout<<it<<" ";
 
  // Printing the size of the array 
  cout<<"The size of the array is "<<arr.size()<<endl;

  // Printing the first element of the vector
  cout<<"The first element of the array is "<<arr.front()<<endl;
  
  // Printing the last element of the array 
  cout<<"The last element of the array is "<<arr.back()<<endl;

  if(arr.empty())
    cout<<"The array is empty"<<endl;
  else
    cout<<"The array is not empty"<<endl;
  
  
   
  return 0;
}

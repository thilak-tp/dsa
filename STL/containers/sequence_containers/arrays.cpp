#include<iostream>
#include<array>

// Sequence containers store data in a  linear manner
// Implementation of arrays STL
using namespace std;

int main()
{

  
  // array <datatype, size> arrayName
  
  // Array declaration and initialization
  // array <int, 5> ar2 {1,2,3,4,5};

  // Array only declaration 
  array <int, 5> ar1  {1,2,3,4,5};
  
  cout<<"Reached after array declaration"<<endl;

  //Printing values of the array
  for(auto it: ar1)
    cout<<it<<" ";

  // Return the first element of the array
  cout<<"The first element in the array is "<<ar1.front()<<endl; 
  
  // Return the last element of the array
  cout<<"The last element in the array is "<<ar1.back()<<endl;
  
  // Return the size of the array 
  cout<<"The size of the array is "<<ar1.size()<<endl;
  

  // Checks whether the array is empty or not
  if(ar1.empty())
    cout<<"The array is empty"<<endl;
  else
    cout<<"The array is not empty"<<endl;

   

  return 0;
}



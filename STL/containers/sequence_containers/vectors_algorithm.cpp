#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>

using namespace std;

int main()
{
  // Declaring and initializing a vector
  vector<int> arr = {2,3,5,1,2,4};

  cout<<"The values in the is "<<endl;
  for(auto it: arr)
    cout<<it<<" ";
  cout<<endl;
  // To sort the given vector
  sort(arr.begin(), arr.end());

  cout<<"After sorting the values are"<<endl; 
   
  for(auto it: arr)
    cout<<it<<" ";

  cout<<endl;
  // To sort the given vector in the descending order
  sort(arr.begin(), arr.end(), greater<int>());
  
  cout<<"After soring the values in descending order is"<<endl;
   
  for(auto it: arr)
    cout<<it<<" ";

  
  cout<<endl;
  // To reverse the given vector
  reverse(arr.begin(), arr.end());

  cout<<"After reversing the values are"<<endl; 
  for(auto it: arr)
    cout<<it<<" ";

  
  cout<<endl;

  return 0;
}

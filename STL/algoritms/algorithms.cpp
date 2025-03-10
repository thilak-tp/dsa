#include<iostream>
#include<algorithm>
#include<numeric>
#include<vector>
using namespace std;

int main()
{
  // A vector to perform the operations on
  vector<int> arr = {1,23,432,22,12,56,4,66};
  
  //The max element in the vector 
  cout<<"The max element in the vector is "<<*max_element(arr.begin(), arr.end())<<endl;  

  // The min elemebt in the vector 
  cout<<"The min element in the vector is "<<*min_element(arr.begin(), arr.end())<<endl;
  

  //To get the sum of the elements in the vector
  cout<<"The sum of the elements in the vector "<<accumulate(arr.begin(), arr.end(),0);
  return 0;
}

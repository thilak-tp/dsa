#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Brute Force Approach - Iterative through all possible sums using two loops
// O(N*N) Time complexity and O(1) Space Complexity
bool twoSumBrute(vector<int> &arr, int target)
{
  for(int i=0; i< arr.size(); i++)
  {
    for(int j=i+1; j<arr.size(); j++)
    {
      if(arr[i] + arr[j] == target)
      {
        return true;
      }

    }

  } 

  return false;
}

// Using binary search - Finding the targets complement and then searching it in the array using binary search
// O(N Log N) Time Complexity and O(1) space complexity
bool binarySearch(vector <int> &arr, int beg, int end, int element)
{
  while(beg <= end)
  {

    int mid = (beg + end)/2;
    if(arr[mid] == element)
      return true;
    else if(arr[mid] > element)
      end = mid - 1;    
    else
      beg = mid + 1;
  }
  
  return false;
}

bool twoSumBS(vector<int> &arr, int target)
{
  sort(arr.begin(), arr.end());
  for(int i = 0; i<arr.size(); i++)
  {
    int complement = target - arr[i];
    if(binarySearch(arr, i+1, arr.size()-1, complement))
    {
      return true;
    }
  }
  return false;
}

// Using Two pointers
// O(N Log N) Time Complexity and O(1) space complexity
bool twoSumTP(vector<int> &arr, int target)
{
  sort(arr.begin(), arr.end());
  int left = 0;
  int right = arr.size();
  
  while(left < right)
  {
    int sum = arr[left] + arr[right];
    
    if(sum == target)
      return true;
    
    else if(sum < target)
      left++;
    else
      right--;
  }
  return false;
}


int main()
{
  vector<int> arr = {1,2,3,4,5,6};
  int target = 5;
  bool exists = twoSumBrute(arr, target);
  
  /*if(exists)
    cout<<"The target sum exists"<<endl;
  else 
    cout<<"The target sum doesn't exist"<<endl;
  
  if(twoSumBS(arr, target))
    cout<<"The target sum exists"<<endl;
  else
    cout<<"The target sum doesn't exist"<<endl;
  */

  if(twoSumTP(arr, target))
    cout<<"The target sum exists"<<endl;
  else
    cout<<"The target sum doesn't exist"<<endl;

  return 0;
}

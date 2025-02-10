#include<iostream>
#include<climits>

using namespace std;

// Brute Froce way is to use Three loops, two for the range and the in k loop for summing
// O(N*N*M) TC and O(1) SC
int maxSubArray(int *arr, int size)
{
  int maxi = INT_MIN;
  for(int i=0; i<size; i++)
  {
    for(int j=i; j<size; j++)
    {
     
      int sum = 0;
      for(int k=i; k<=j; k++)
      {    
        sum+= arr[k];
      }
      maxi = max(maxi, sum);

    }
}
  return maxi;
}


// Better way is to use Three loops, two for the range and the in k loop for summing
// O(N*N) TC and O(1) SC
int maxSubArrayBetter(int *arr, int size)
{
  int maxi = INT_MIN;
  for(int i=0; i<size; i++)
  {
    int sum=0;
    for(int j=i; j<size; j++)
    {
     
      sum = arr[j];
      maxi = max(maxi, sum);

    }
  } 
  return maxi;
}

// Optimal Solution: Kadane's algorithm.
// If we carry less than zero, we set the sum to 0
// O(N*N) TC and O(1) SC
int maxSubArrayKadanes(int *arr, int size)
{
  int maxi = INT_MIN;
  int sum = 0;

  for(int i=0; i<size; i++)
  {
    sum += arr[i];

    if(sum > maxi)
    {
       maxi = sum;
    }

    // Whenever the sum is less than 0 we set sum is 0
    if(sum < 0)
      sum = 0;
  }
  if(maxi < 0)
    return 0;
  return maxi;
}

int main()
{
  int arr[] = {-1,2,-3,4,5,-6};
  int size = sizeof(arr)/sizeof(int);

  cout<<"The sum of the maximum subarray is "<<maxSubArrayKadanes(arr, size);

  return 0;
}

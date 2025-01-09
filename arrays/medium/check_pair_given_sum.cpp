#include<iostream>

using std::cout;
using std::cin;
using std::endl;

// Regular method 
bool checkPairGivenSum(int *arr, int n, int sum)
{
	for(int i=0; i<n; i++)
	for(int j = i+1; j<n; j++)
	{
		if(arr[i] + arr[j] == sum )
			return true;

	}

	return false;

}

// Two pointer method
// Here we have to sort the array first and then use the below function.
bool checkPairGivenSumTwoPtr(int *arr, int n, int sum)
{
	int left = 0;
	int right = n-1;
	while(left > right)
	{
		int calSum = arr[left] + arr[right];
		if( calSum == sum )
			return true;
		else if(calSum < sum)
			left++;
		else
			right--;	
	}

	return false;
}

int main()
{
	int sum, n, arr[20];
	
	cout<<"Enter the n value"<<endl;
	cin>>n;

	cout<<"Enter "<<n<<" values:"<<endl;
	for(int i=0; i<n; i++)
		cin>>arr[i];

	cout<<"Enter the sum to find in the array."<<endl;
	cin>>sum;

	if(checkPairGivenSumTwoPtr(arr, n, sum))
		cout<<"A pair with the given sum exists."<<endl;
	else
		cout<<"A pair with the given sum doesnt exist"<<endl;

	return 0;
}

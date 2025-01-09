#include<iostream>

using std::cout;
using std::cin;
using std::endl;
// Brute force 
// O(N)
int findLargest(int *arr, int n)
{
	int largest = 0;
	
	for(int i =1; i<n ; i++)
	{
		if(arr[largest] < arr[i])
		{
			largest = i;
		}
	}

	return arr[largest];
	
}

int main()
{
	int arr[20], n;

	cout<<"Enter the n value"<<endl;
	cin>>n;

	cout<<"Enter "<<n<<" values for the array."<<endl;
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}

	int largest = findLargest(arr,n);

	cout<<"In the given array "<<largest<<" is the largest number."<<endl;
	
	return 0;

}

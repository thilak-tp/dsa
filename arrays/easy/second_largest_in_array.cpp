#include<iostream>

using std::cout;
using std::cin;
using std::endl;
// Brute force 
// O(N)
int findSecondLargest(int *arr, int n)
{
	int largest = -1;
	int secondLargest = -1;
	for(int i = 0; i<n ; i++)
	{
		if(arr[i] > largest)
		{
			secondLargest = largest;
			largest = arr[i];
			
		}

		if(arr[i] > largest && arr[i]>secondLargest)
		{
			secondLargest = arr[i];
		}
	}

	return secondLargest;
	
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

	int secondLargest = findSecondLargest(arr,n);

	cout<<"In the given array "<<secondLargest<<" is the second largest number."<<endl;

	
	return 0;

}

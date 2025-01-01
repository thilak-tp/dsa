#include<iostream>

using std::cout;
using std::cin;
using std::endl;
using std::swap;

// A function to selection sort the given array
void insertionSort(int *arr, int n)
{
	for(int i=0; i<n; i++)
	{
		int j = i;
		while(j > 0 && arr[j-1] > arr[j])
		{
			swap(arr[j-1], arr[j]);
			j--;
		}
		
	}

}

int main()
{
	int arr[20];
	int n;
	cout<<"Enter  the n value:"<<endl;
	cin>>n;
	
	cout<<"Enter "<<n<<" values"<<endl;
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	
	insertionSort(arr, n);
	
	cout<<"The sorted array is:"<<endl;
	for(int i=0; i<n; i++)	
		cout<<arr[i]<<" ";
	cout<<endl;
	return 0;
}

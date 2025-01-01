#include<iostream>

using std::cout;
using std::cin;
using std::endl;
using std::swap;

// A function to selection sort the given array
void BubbleSort(int *arr, int n)
{
	bool swappedOnce = false;
	for(int i=n-1; i>=0; i--)
	{
		for(int j= 0; j<=i-1; j++)
		{
			
			if(arr[j]>arr[j+1])
			{
				swap(arr[j], arr[j+1]);
				swappedOnce = true;
			}
		}
		if(swappedOnce == true)
		{
			break;
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
	
	BubbleSort(arr, n);
	
	cout<<"The sorted array is:"<<endl;
	for(int i=0; i<n; i++)	
		cout<<arr[i]<<" ";
	cout<<endl;
	return 0;
}

#include<iostream>

using std::cout;
using std::cin;
using std::endl;
using std::swap;

// A function to selection sort the given array
void selectionSort(int *arr, int n)
{
	int min;
	for(int i=0; i<=n-2; i++)
	{
		min = i;
		for(int j= i; j<=n-1; j++)
		{
			
			if(arr[j]<arr[min])
			{
				min = j;
			}
		}
		

		swap(arr[i], arr[min]);
	/*	int temp = arr[min];
		arr[min] = arr[i];
		arr[i] = temp;
	*/	
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
	
	selectionSort(arr, n);
	
	cout<<"The sorted array is:"<<endl;
	for(int i=0; i<n; i++)	
		cout<<arr[i]<<" ";
	cout<<endl;
	return 0;
}

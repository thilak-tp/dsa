#include<iostream>

using std::cout;
using std::cin;
using std::endl;

void shiftKLeft(int *arr, int n, int k)
{
	int temp[k];
	
	for(int i=0;i <k; i++)
		temp[i] = arr[i];
	for(int i=0; i<n-k; i++)	
	{
		arr[i] = arr[i+k];
	}
		
	int j=0;
	for(int i=n-k; i<n && j <k ; i++)
	{
		arr[i] = temp[j];
		j++;

	}


}

int main()
{
	int n,k,arr[30];
		
	cout<<"Enter the n value."<<endl;
	cin>>n;
	
	cout<<"Enter "<<n<<" values:"<<endl;
	for(int i=0; i<n; i++)
		cin>>arr[i];

	cout<<"Enter the number of elements to shift to left."<<endl;
	cin>>k;

	shiftKLeft(arr,n,k);

	cout<<"After shifting "<<k<<" elements to the left, the array is:"<<endl;
	for(int i=0; i<n; i++)
		cout<<arr[i]<<" ";

	return 0;
}

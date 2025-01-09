#include<iostream>

using std::cout;
using std::cin;
using std::endl;

void leftShift(int *arr, int n)
{
	int temp = arr[0];
	for(int i=0; i<n-1; i++)
	{
		arr[i] = arr[i+1];
	}
	arr[n-1] = temp;
	

}

int main()
{
	int arr[20], n;

	cout<<"Enter the n value"<<endl;
	cin>>n;

	cout<<"Enter "<<n<<" different values:"<<endl;
	for(int i=0; i<n; i++)
		cin>>arr[i];
	
	leftShift(arr, n);
	
	cout<<"Left shifted array is:"<<endl;
	for(int i=0; i<n; i++)
		cout<<arr[i]<<" ";

	return 0;

}

#include<iostream>

using std::cout;
using std::cin;
using std::endl;

void rightShift(int *arr, int n)
{
	int temp = arr[n-1];
	for(int i=n-1; i>0; i--)
	{
		arr[i] = arr[i-1];
	}
	arr[0] = temp;
	

}

int main()
{
	int arr[20], n;

	cout<<"Enter the n value"<<endl;
	cin>>n;

	cout<<"Enter "<<n<<" different values:"<<endl;
	for(int i=0; i<n; i++)
		cin>>arr[i];
	
	rightShift(arr, n);
	
	cout<<"Left shifted array is:"<<endl;
	for(int i=0; i<n; i++)
		cout<<arr[i]<<" ";

	return 0;

}

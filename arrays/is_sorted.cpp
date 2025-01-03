#include<iostream>

using std::cout;
using std::cin;
using std::endl;

bool isSorted(int *arr, int n)
{
	for(int i=1; i<=n; i++)
	{
		if(arr[i] < arr[i-1])
		{
			return false;
		}
	}
	
	return true;
	
}

int main()
{
	int n, arr[20];

	cout<<"Enter the N value."<<endl;
	cin>>n;

	cout<<"Enter "<<n<<" values:"<<endl;
	for(int i =0; i<n; i++)
	{
		cin>>arr[i];
	}

	if(isSorted(arr,n))
		cout<<"The array is sorted"<<endl;
	else
		cout<<"The array is not sorted"<<endl;


	return 0;
}

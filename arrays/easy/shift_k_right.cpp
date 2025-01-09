#include<iostream>

using std::cout;
using std::cin;
using std::endl;

void shiftKRight(int *arr, int n, int k)
{
	int temp[k];
	
	int j=n-1;
	for(int i=0;i < k; i++)
	{
		temp[i] = arr[j];
		j--;
		cout<<"Temp: "<<temp[i]<<" ";
		
	}
	for(int i=n-1; i>=k; i--)	
	{
		arr[i] = arr[i-k];
		cout<<"Shifting: "<<arr[i]<<" ";
	}
		
	for(int i=0;  i<k ; i++)
	{
		arr[i] = temp[i];
		cout<<"Back from temp"<<arr[i]<<" ";
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

	shiftKRight(arr,n,k);

	cout<<"After shifting "<<k<<" elements to the right, the array is:"<<endl;
	for(int i=0; i<n; i++)
		cout<<arr[i]<<" ";

	return 0;
}

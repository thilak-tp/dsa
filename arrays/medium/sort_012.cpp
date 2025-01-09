#include<iostream>

using std::cout;
using std::cin;
using std::endl;
using std::swap;

// Brute force way of doing this is to sort the array and it will automatically 
// Will be in order
// Another approach is since there are only countable numebrs to count and 
// rewrite the contents of the array.
void sort012(int *arr, int n)
{

	int cnt0 = 0;
	int cnt1 = 0;
	int cnt2 = 0;

	for(int i=0; i<n; i++)
	{
		if(arr[i] == 0)
			cnt0++;
		else if(arr[i] == 1)
			cnt1++;
		else if(arr[i] == 2)
			cnt2++;
		else return;
	}
	
	cout<<"Count0 = "<<cnt0<<endl;
	cout<<"Count1 = "<<cnt1<<endl;
	cout<<"Count2 = "<<cnt2<<endl;
	for(int i=0; i<cnt0; i++)
		arr[i] = 0;
	for(int i= cnt0; i <cnt0 +cnt1; i++)
		arr[i] = 1;
	for(int i= cnt0 + cnt1; i<n; i++)
		arr[i] = 2;

}

// Using 3 pointer method
void sort012_3Ptr(int *arr, int n)
{
	int low = 0;
	int mid = 0;
	int high = n-1;
	
	while(mid <= high)
	{
		if(arr[mid] == 0)
		{
			swap(arr[mid], arr[low]);
			low++;
			mid++;
		}	
		else if(arr[mid] == 1)
		{
			mid++;
		}
		else
		{
			swap(arr[mid], arr[high]);
			high--;
		}
	}
}

int main()
{
	int arr[20], n;


	cout<<"Enter the n value."<<endl;
	cin>>n;

	cout<<"Enter "<<n<<" value."<<endl;
	for(int i=0; i<n; i++)
		cin>>arr[i];

	sort012_3Ptr(arr,n);	

	cout<<"Sorted array is:";
	for(int i=0; i<n; i++)
		cout<<arr[i]<<" ";
	
	return 0;
}

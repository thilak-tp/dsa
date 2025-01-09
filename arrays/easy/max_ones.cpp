#include<iostream>

using std::cout;
using std::cin;
using std::endl;
using std::max;
// Find the most number of consecutive ones of the array
int maxOnes(int *arr, int n)
{
	int count = 0;
	int maxi = 0;

	for(int i=0; i<n; i++)
	{
		if(arr[i] == 1)
		{
			count++;
		}
		else
		{
			count = 0;
		}
	
		maxi = max(maxi, count);
	}
	return maxi;
}

int main()
{

	int arr[20], n;

	cout<<"Enter the n value"<<endl;
	cin>>n;
	
	cout<<"Enter "<<n<<" values :"<<endl;
	for(int i=0; i<n; i++)
		cin>>arr[i];
	
	int count = maxOnes(arr, n);
	cout<<"The max consecutive ones are:" << count;
	return 0;
}

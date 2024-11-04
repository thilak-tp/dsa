//Given an array A of size N element, find a pair of elements whose sum is Z what is given by the user.
#include<iostream>

using std::cout;
using std::endl;
using std::cin;

int FindPair(int *arr, int n, int sum);

int main()
{
	int sum=0,n=0;
	int *A;
	A = new int[20];
	cout<<"Enter the number of element in array A."<<endl;
	cin>>n;
	cout<<"Enter "<<n<<" number of elements."<<endl;
	for(int i=0;i<n;i++)
		cin>>A[i];

	cout<<"The Entered array is:"<<endl;
	for(int i=0;i<n;i++)
	{
		//cout<<"Address of each element is "<<&A[i]<<endl;
		cout<<A[i]<<" "<<endl;
	}

	cout<<"Enter the sum for the pair to be found."<<endl;
	cin>>sum;

	if(!FindPair(A,n, sum))
		cout<<"The pair with the sum "<<sum<<" was found"<<endl;
	else 

		cout<<"The pair with the sum "<<sum<<" was not found"<<endl;
	return 0;


}


int FindPair(int *arr, int n, int sum)
{
	for(int i=0;i<n;i++)
	{
		//cout<<"Address of each element is "<<&A[i]<<endl;
		cout<<arr[i]<<" "<<endl;
	}
	if(n<=0)
	{
		cout<<"Enter a Valid value for n";
		return 1;
	}
	if(arr == NULL)
	{
		cout<<"There are no elements in the array.";
		return 1;
	
	}
	for(int i =0; i<n; i++)
		for(int j=0;j<n;j++)
		{
			if((i!=j) && (arr[i]+arr[j] == sum))
				return 0;
		}
	return 1;

}

#include<iostream>

using std::cout;
using std::cin;
using std::endl;
using std::swap;

//Brute Force
//Reversing the given array.
int* reverseArray(int* arr, int n)
{	
	int *revArray = new int[20];
	for(int i = n-1; i>=0;i--)
	{

		revArray[n - i - 1] = arr[i];
	}

	return revArray;
}

//Two pointer method.
int* reverseArray1(int *arr, int n)
{
	int beg = 0;
	int end = n -1;
	while(beg<end)
	{
		std::swap(arr[beg], arr[end]);
		beg++;
		end--;
	}
	
	return 0;
}

//Using recursion
void reverseArrayRec(int *arr, int beg, int end)
{
	if(beg<end)
	{
		swap(arr[beg], arr[end]);
		reverseArrayRec(arr, beg + 1, end - 1);
	}
}

int main()
{
	int n;
	int *arr = new int[20];

	cout<<"Enter the size of the array."<<endl;
	cin>>n;
	cout<<"Enter "<<n<<" elements."<<endl;
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	
	int *reversed = reverseArray(arr,n);
	cout<<"Function 1"<<endl;
	cout<<"reveresed array:"<<endl;
	
	for(int i=0; i<n; i++)
	{
		cout<<reversed[i]<<" ";
	}
	cout<<endl;
	/*
	reverseArray1(arr,n);
	cout<<"Function 2"<<endl;
	cout<<"Reveresed Array:"<<endl;
	for(int i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
	*/
	reverseArrayRec(arr,0, n-1);
	cout<<"Function 3:"<<endl;
 	for(int i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}

	return 0;
}

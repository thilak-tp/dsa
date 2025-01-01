#include<iostream>

using std::cout;
using std::cin;
using std::endl;

//A hashing array to store the occurence of the numbers in the given array.
void hashIt(int n, int *arr, int* hashArr)
{
	for(int i =0; i<n; i++)
	{
		hashArr[arr[i]] += 1;	
	}
	
}

int main()
{

	int arr[100],hash[100];
	int n;
		
	cout<<"Enter the size of the array.\n";
	cin>>n;
	cout<<"Enter "<<n<<" numbers for the array.\n";
	
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	
	hashIt(n,arr,hash);
	cout<<"Here are the occurences of each of the numbers."<<endl;
	for(int i = 0; i<=n; i++)
	{
		cout<<i<<" "<<hash[i]<<endl;	
	}
	return 0;
}

#include<iostream>

using std::cout;
using std::cin;
using std::endl;


// A function to perform linear search

bool linearSearch(int *arr, int n, int element)
{
	for(int i=0; i<n; i++)
	{
		if(arr[i] == element)
		{ 
			return true;

		}
	}

	return false;
}

int main()
{
	
	int arr[20], n, element;

	cout<<"Enter the n value"<<endl;
	cin>>n;
		
	cout<<"Enter "<<n<<" values:"<<endl;
	for(int i=0; i<n; i++)
		cin>>arr[i];

	cout<<"Enter an element to search in the array"<<endl;
	cin>>element;

	if(linearSearch(arr,n,element))
		cout<<"The element was found"<<endl;
	else
		cout<<"The element was not found"<<endl;
	return 0;

}

// Linear search - Linearly navigating through an array to find the element we are searching for 
// Complexity - O(n)
#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int linear_search(int *array, int *key,  int *n);

int main()
{
	int n, key, *array;
	array = new int[20];
	cout<<"Enter the number of elements in the array."<<endl;
	cin>>n;
	for(int i =0; i<n; i++)
	{
		cin>>array[i];
	}

	cout<<"Enter a key value to find in the array"<<endl;
	cin>>key;

	if(!linear_search(array, &key,&n))
		cout<<"The element was found."<<endl;
	else
		cout<<"The element was not found."<<endl;
	return 0;

}


int linear_search(int *array, int *key, int *n)
{
	for(int i=0;i<*n;i++)
	{
		if(array[i]== *key)
			return 0;
	}

	return 1;


}

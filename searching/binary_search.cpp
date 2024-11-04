/* Binary search - Finding the element in an arry of n elements which is already sorted in ascending order and try to find the giving key element by progressively dividing the search array into two, every next time.
 */
#include<iostream>

using std::cout;
using std::cin;
using std::endl;


int binary_search(int *array, int *key,  int *n);

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

	if(!binary_search(array, &key,&n))
		cout<<"The element was found."<<endl;
	else
		cout<<"The element was not found."<<endl;

	return 0;

}


int binary_search(int *array, int *key,  int *n)
{
	int start_idx = 0;
	int end_idx = *n-1;


	while(start_idx <= end_idx)
	{

		int mid_idx = ( start_idx + end_idx )/2;
		if(array[mid_idx] == *key)
		{
			return 0;
		}
		if(array[mid_idx] > *key)
		{
			end_idx = mid_idx - 1;
	
		}
		else if(array[mid_idx] < *key)
		{
			start_idx = mid_idx + 1;
		}
	}
	return -1;
}


// Bubble sort - Given an array of random numbers with the array size n, sort the array using bubble sort - Comparing first two elements of the array and if the first is greater
// than the second number, swap the values.
#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int bubble_sort(int *array, int *n);

int main()
{
	int n,*array;
	array = new int[20];
	cout<<"Enter the number of elements in the array."<<endl;
	cin>>n;
	for(int i =0; i<n; i++)
	{
		cin>>array[i];
	}


	bubble_sort(array,&n);
	cout<<"The Bubble sorted array is:"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<array[i]<<"\t";
	
	}


	return 0;

}


int bubble_sort(int *array, int *n)
{
	int temp;
	// For n=5, outer loop will run 4 times, i from 0 to 4, for each value of i , j will go from 0 to 4, 0 to 3, 0 to 3, 0 to 1 
	// for each value of i, j runs n-i-1 number of times  
	for(int i=0;i<*n-1;i++)
	{
		for(int j=0; j<*n-i-1;j++)
		{
			if(array[j] > array[j+1])
			{
				temp = array[j];
		        	array[j] = array[j+1];
				array[j+1] = temp;	
			}

		}

		 
	
	}
	

	
	return 0;
}

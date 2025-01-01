#include<iostream>
#include<vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::swap;

int partition(vector <int> &arr, int beg, int end)
{
	int pivot = arr[beg];
	
	int i = beg;
	int j = end;
	
	while(i < j)
	{
		while(arr[i] <= pivot && i <= end)
		{
			i++;
		}	
		while(arr[j] > pivot && j >= beg + 1)
		{
			j--;
		}	
		if(i < j)
		{
			swap(arr[j], arr[i]);
		}

	}

	swap(arr[beg], arr[j]);
	return j;
}


void quickSort(vector <int> &arr, int beg, int end)
{
	if(beg < end)
	{
		int pIndex = partition(arr, beg, end);
		quickSort(arr, beg, pIndex - 1);
		quickSort(arr,pIndex + 1, end);
	}
}
int main()
{
	//int arr[30],n;
	int n;	
	int input;
	vector <int> arr;
	cout<<"Enter the n value."<<endl;
	cin>>n;

	cout<<"Enter "<<n<<" values to be sorted."<<endl;		
	while(cin>>input)
	{
		arr.push_back(input);
	}
	
	quickSort(arr, 0 , n-1);
	
	cout<<"After sorting, the array is:"<<endl;
	for(int i=0; i<n; i++)
		cout<<arr[i]<<" ";
	cout<<endl;
	return 0;
}

#include<iostream>
#include<vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

void merge(vector <int> &arr, int beg, int mid, int end)
{

	vector <int> temp;
	
	int left = beg;
	int right = mid + 1;

	while(left <= mid && right <= end)
	{
		if(arr[left] <= arr[right])
		{
			temp.push_back(arr[left]);
			left++;
		}
		else
		{
			temp.push_back(arr[right]);
			right++;
		}
	}
	
	// If elements of the left hald are still left
	while(left <= mid)
	{
		temp.push_back(arr[left]);
		left++;
	}

	// if the elements on the right half are still left
	while(right <= end)
	{
		temp.push_back(arr[right]);
		right++;
	}
	
	// Transfering the sorted elements from temp to original array
	for(int i=beg; i <=end; i++)
	{
		arr[i] = temp[i - beg];
	}

}
void mergeSort(vector <int> &arr, int beg, int end)
{
	int mid = (beg + end)/2;
	mergeSort(arr, beg, mid);
	mergeSort(arr, mid+1, end);
	merge(arr, beg, mid, end);

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
	
	mergeSort(arr, 0 , n-1);
	
	cout<<"After sorting, the array is:"<<endl;
	for(int i=0; i<n; i++)
		cout<<arr[i]<<" ";
	cout<<endl;
	return 0;
}

#include<iostream>
#include<set>

using std::set;
using std::cout;
using std::cin;
using std::endl;

// Brute Fprce
// To remove dupliactes from an array.

int removeDuplicates(int *arr, int n)
{
	set <int> set;
	for(int i=0 ; i<n; i++)
	{
		set.insert(arr[i]);
	}
	
	int k = set.size();
	int j =0;
	for(int x:set)
	{
		arr[j++] = x;
	}

	return k;
}

// Optimal Approadh
// Two pointer
// 

int removeDuplicatesTwoPtr(int *arr, int n)
{

	int i=0;
	for(int j=1; j<n;j++)
	{
		if(arr[i] != arr[j])
		{
			i++;
			arr[i] = arr[j];
		}
	
	}

	return i+1;

}
int main()
{
	int n, arr[20];
	cout<<"Enter the n value."<<endl;
	cin>>n;
	
	cout<<"Enter "<<n<<" values:"<<endl;
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}

	int newN = removeDuplicatesTwoPtr(arr, n);
	
	cout<<"After removing duplicates:"<<endl;
	for(int i=0; i<newN; i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}

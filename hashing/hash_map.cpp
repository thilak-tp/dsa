#include<iostream>
#include<map>
using std::cout;
using std::cin;
using std::endl;
using std::map;
void mapHashIt(int *arr, int size, map <int, int> &mpp)
{
	for(int i=0;i<size;i++)
	{
		mpp[arr[i]]++;
	}
}

int main()
{
	int arr[20];
	int n;
	
	cout<<"Enter the n value."<<endl;
	cin>>n;

	cout<<"Enter "<<n<<" elements."<<endl;
	for(int i =0; i<n ; i++)
	{
		cin>>arr[i];
	}

	map <int ,int> mpp;
	mapHashIt(arr, n, mpp);
	
	cout<<"HashMap for the given array is:"<<endl;
	for(int i=0; i<n; i++)
	{
		cout<<i<<" : "<<arr[i]<<" : "<<mpp[arr[i]]<<endl;
	}

	cout<<"or"<<endl;
	for(auto it: mpp)
	{
		cout<<it.first<<" : "<<it.second<<endl;
	}	
	return 0;
}


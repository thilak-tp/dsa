#include<iostream>
#include<map>
#include<utility>

using std::cout;
using std::cin;
using std::endl;
using std::map;
using std::pair;

void findIntMax(int *arr, int n, pair <int , int> &minMax)
{


	map <int, int> mpp;
	for(int i=0; i<n;i++)
	{
		mpp[arr[i]]++;
	}

	int maxFreq =0;
	int minFreq =n;
	int maxEle = 0;
	int minEle = 0;
	for(auto it: mpp)
	{

		int count = it.second;
		int element = it.first;
		if(count > maxFreq)
		{
			maxFreq = count;
			maxEle = element; 
		}
		if(count < minFreq)
		{
			minEle = element;
			minFreq = count;
		}
	}
		
	minMax.first = minEle;
	minMax.second = maxEle;

	
}

int main()
{

	int arr[20];
	int n;
		
	cout<<"Enter the n value."<<endl;
	cin>>n;

	cout<<"Enter "<<n<<" values for the array:"<<endl;
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	
	pair <int, int> minMax;
	findIntMax(arr, n ,minMax);
	
	cout<<"Max occurence is of "<<minMax.first<<endl;
	cout<<"Min occurence is of "<<minMax.second<<endl;
	return 0;
}


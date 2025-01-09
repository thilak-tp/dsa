#include<iostream>
#include<vector>
#include<map>

using std::cout;
using std::cin;
using std::endl;
using std::map;
using std::vector;

// A functino to find the Union of the two arrays.
vector <int> findunion(int *arr1, int *arr2, int n1, int n2)
{
	map <int, int> freq;
	
	vector <int> Union;

	for(int i =0; i<n1; i++)
	{
		freq[arr1[i]]++;
	}
		
	for(int i=0; i<n2; i++)
	{
		freq[arr2[i]]++;
	}

	for(auto it: freq)
	{
		Union.push_back(it.first);
	}
	
	return Union;
}

int main()
{
	int arr1[20], arr2[20];
	int n1, n2;

	cout<<"Enter the first N value."<<endl;
	cin>>n1;

	cout<<"Enter "<<n1<<" numbers."<<endl;
	for(int i=0; i<n1; i++)
		cin>>arr1[i];
	
	cout<<"Enter the second N value."<<endl;
	cin>>n2;

	cout<<"Enter "<<n2<<" numbers."<<endl;
	for(int i=0; i<n2; i++)
		cin>>arr2[i];
	vector <int> arrayUnion = findunion(arr1, arr2, n1, n2);
	
	cout<<"Union of the given two arrays is:"<<endl;
	for(auto it: arrayUnion)
		cout<<it<<" ";
	return 0;	
}

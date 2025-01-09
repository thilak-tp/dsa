#include<iostream>
#include<map>

using std::cout;
using std::cin;
using std::endl;
using std::map;

int occurenceNby2(int *arr, int n)
{
	map <int , int> freq;
	for(int i=0 ; i<n ; i++)	
		freq[arr[i]]++;

	for(auto it: freq)
	{
		if(it.second > (n/2))
			return it.first;
	}	

	return -1;
}

int main()
{
	int arr[20], n;
		
	cout<<"Enter the n value"<<endl;
	cin>>n;

	cout<<"Enter "<<n<<" values:"<<endl;
	for(int i=0; i<n; i++)
		cin>>arr[i];

	int number = occurenceNby2(arr,n);
	if(number == -1)
	{	
		cout<<"There is no number than occers more than N/2 times"<<endl;
		return 0;
	}

	cout<<"The number that has occured more than N/2 times is "<<number<<endl;
	
 	return 0;
}

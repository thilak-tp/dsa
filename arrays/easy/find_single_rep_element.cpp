#include<iostream>
#include<map>

using std::cout;
using std::cin;
using std::endl;
using std::map;

// A function to find the never repeated number
int onceNumber(int *arr, int n)
{
	map <int,int> freq;

	for(int i=0; i<n; i++)
		freq[arr[i]]++;

	for(auto it: freq)
	{
		if(it.second == 1)
			return it.first;
	}	

	return -1;
}

// A better approach to find the never repeated number is using XOR
// XOR of similar number gives 0
// XOR with 0 gives the same number
int onceNumberXOR(int *arr, int n)
{
	int xorr = 0;
	
	for(int i=0; i<n; i++)
	{
		xorr = xorr ^ arr[i];
	}

	return xorr;

}
int main()
{
	int arr[20], n;

	cout<<"Enter the n value"<<endl;
	cin>>n;

	cout<<"Enter "<<n<<" numbers:";
	for( int i=0; i<n; i++)
		cin>>arr[i];

	
	int once = onceNumberXOR(arr, n);
	if(once == -1)
		cout<<"There is no once repeated number"<<endl;	
	else	
		cout<<"The never repeated number is "<<once<<endl;
	
	return 0;
}

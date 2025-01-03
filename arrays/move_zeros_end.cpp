#include<iostream>
#include<vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::swap;

//A function to shift all the zeros to the end of the array
// Brute Force
void moveZerosToEnd(vector <int> &arr, int n)
{
	vector <int> temp;
	
	for(auto i=0; i<n ;i++)
	{
		if(arr[i]!=0)
		{
			temp.push_back(arr[i]);
		}
	}

	int nonZeroN = temp.size();
	
	for(int i=0; i< nonZeroN ; i++)
		arr[i] = temp[i];

	for(int i=nonZeroN; i <n; i++)
		arr[i] = 0;
}

void moveZerosToEndTwoPtr( vector<int >&arr, int n)
{
	int j = -1;
	for(int it: arr)
	{
		if(arr[it] == 0)
		{
			j = it;
			break;
		}
	}

	if(j == -1)
		return;

	for( int i = j+1; i<n; i ++)
	{
		if(arr[i] !=0)
		{
			swap(arr[j], arr[i]);
			j++;
		}
	}
}

int main()
{	
	vector <int> arr;
	
	int input;

	cout<<"Enter values for the array"<<endl;
	while(cin>>input)
	{
		arr.push_back(input);
	}
	
	int n = arr.size();

	moveZerosToEndTwoPtr(arr,n);

	cout<<"After pushing zeroes to the end: "<<n<<endl;
	for( auto it: arr)
		cout<<it<<" ";
	
	return 0;
}


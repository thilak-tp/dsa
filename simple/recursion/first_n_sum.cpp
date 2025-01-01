#include<iostream>

using std::cout;
using std::cin;
using std::endl;

//Paramterrized way
void printNSum(int i, int sum)
{
	if(i<1)
	{
		cout<<sum<<endl;
		return;
	}
	printNSum(i-1, sum+i);
	
}

//Function way - as a return value
int printNSumF(int n)
{
	if(n == 1)
		return 1;
	return n + printNSumF(n-1);
	
}
int main()
{

	int n;

	cout<<"Enter the n value"<<endl;
	cin>>n;

	printNSum(n,0);
	cout<<"Using the Functional Recursion"<<endl<<"The sum is "<<printNSumF(n);

	return 0;
}


#include<iostream>

using std::cout;
using std::cin;
using std::endl;


// A function to find the nth fibonacci
void nFibo(int n)
{
	int sum = 0;
	int a = 0;
	int b = 1;
	cout<<a<<" "<<b<<" ";
	for(int i=0; i<n; i++)
	{
		sum = a + b;
		cout<<sum<<" ";
		a = b;
		b = sum;
	 
	}
}
int main()
{

	int n;
	cout<<"Enter the n value"<<endl;
	cin>>n;
	nFibo(n);
	return 0;
}

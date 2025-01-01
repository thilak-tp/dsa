#include<iostream>

using std::cout;
using std::cin;
using std::endl;


// A function to find the nth fibonacci
int nFibo(int n)
{
	if(n<=1)
		return n;
	return nFibo(n - 1) + nFibo(n-2);

}
int main()
{

	int n;
	cout<<"Enter the n value"<<endl;
	cin>>n;

	cout<<n<<"th value is  "<<nFibo(n);

	return 0;
}

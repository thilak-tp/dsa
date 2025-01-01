#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int fact(int n)
{	if(n == 0)
	 return 1;

	return n * fact(n-1);
}
int main()
{
	int n;
	cout<<"Enter a number"<<endl;
	cin>>n;
	
	cout<<"The factorial of "<<n<<" is "<<fact(n)<<endl;
	return 0;
}

#include<iostream>

using std::cout;
using std::cin;
using std::endl;

void printNName(int n, int i)
{

	if(i > n)
		return;
	cout<<"Thilak"<<endl;
	printNName(n,i+1);
}

int main()
{
	int n;

	cout<<"Enter how many times your name is to be printed.\n";
	cin>>n;
	printNName(n,1);
	return 0;
}

#include<iostream>

using std::cout;
using std::cin;
using std::endl;

// A function to print the divisors a given number

void printDivisors(int number)
{
	for(int i = 1; i <=number; i++)
	{
		if(number % i == 0)
			cout<<i<<" ";
	}
}

int main()
{

	int number;
	
	cout<<"Enter a number"<<endl;
	cin>>number;
	printDivisors(number);

	return 0;
}


#include<iostream>

using std::cout;
using std::cin;
using std::endl;

// A function to reverse a given number

int reverse(int number)
{
	int digit;
	int numberReverse = 0;
	
	while(number > 0)
	{
		digit = number % 10;
		numberReverse = (numberReverse*10) + digit;
		number /= 10;
		
	}

	return numberReverse;
}

int main()
{
	int number;
	cout<<"Enter a number to reverse it"<<endl;
	cin>>number;
	cout<<"The reverse of "<<number<<" is "<<reverse(number)<<endl;
	return 0;
}

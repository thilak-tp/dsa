#include<iostream>
#include<math.h>
using std::cout;
using std::cin;
using std::endl;

// A function to check if a number is prime or not

bool isPrime(int number)
{
	if(number == 0)
		return false;
	for(int i =2; i<number ; i++)
	{
		if(number % i == 0)
		{
			return false;
		}
	}
	return true;
}
// Optimal method
// We only iterate to the square root of n and then count its reverse reciprocal, it the count at the end is 2
// That means it only has facters only 1 and itself.

bool isPrimeOM(int number)
{
	int sqrtN = sqrt(number);
	int count = 0;

	for(int i =1; i<=sqrtN; i++)
	{
		if(number % i == 0)	
		{
			count ++;
			if(number/i != i)
			{
				count++;
			}
		} 	
	}	

	if(count == 2)
		return true;
	return false;
}

int main()
{
	int number;
	cout<<"Enter a number"<<endl;
	cin>>number;
	
	if(isPrime(number))
		cout<<"The number "<<number<<" is Prime"<<endl;
	else

		cout<<"The number "<<number<<" is not Prime"<<endl;

	if(isPrimeOM(number))
		cout<<"The number "<<number<<" is Prime"<<endl;
	else

		cout<<"The number "<<number<<" is not Prime"<<endl;
	return 0;
}

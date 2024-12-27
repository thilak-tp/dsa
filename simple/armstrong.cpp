#include <iostream>
#include <string>
#include <math.h>
using std::cout;
using std::cin;
using std::endl;

// A function to check if the given number is an 
// Armstrong number or not

bool isArmstrong(int number)
{
	int num = number;
	int digit;
	int sum = 0;
	int digitCount = std::to_string(number).length();
	while(number > 0)
	{
		digit = number % 10;
		sum += pow(digit, digitCount);
		number /= 10;
	}		

	if(num == sum)
		return true;
	return false;
}

int main()
{
	int number;
	cout<<"Enter a number"<<endl;
	cin>>number;
	
	if(isArmstrong(number))
		cout<<"The number "<<number<<" is an Armstrong number."<<endl;
	else
		cout<<"The number "<<number<<" is not an Armstrong number."<<endl;
 	return 0;
}

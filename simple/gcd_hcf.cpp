#include<iostream>
#include<algorithm>
using std::cout;
using std::cin;
using std::endl;

// Find the GCD/HCF of two given numbers
int HCFof(int num1, int num2)
{
	int HCF = 1;
	for (int i = 1; i <= std::min(num1,num2); i++)
	{
		if(num1 % i == 0 && num2 % i ==0)
		{
			HCF = i;
		}
	}
	
	return HCF;
}

//Find the GCD/HCF of two numbers but this time iterating down from min(num1,num2) since the HCF
// would be potentially at the highest number.
int  BetterHCFof(int num1, int num2)
{
	
	for( int i = std::min(num1, num2); i > 1; i--)
	{
		if(num1 % i == 0 && num2 % i == 0)
		{
			return i;
		}
	
	}
	return 1;

}
//Optimal Solution
// Using Euclidean Algorithm we can find the HCF

int EuclidHCFof(int num1, int num2)
{
	while (num1>0 && num2>0)
	{
		if(num1>num2)
		{
			num1 = num1 % num2;
		}
		else
		{
			num2 = num2 % num1;
		}

	}
	
	if(num1 == 0)
		return num2;

	return num1;
}

int main()
{
	int num1, num2;
	cout<<"Enter two numbers to find its GCD/HCF"<<endl;
	cin>>num1>>num2;
		
	cout<<"The GCD/HCF of numbers "<<num1<<" and "<<num2<<" is "<<HCFof(num1,num2)<<endl;
	cout<<"The GCD/HCF of numbers "<<num1<<" and "<<num2<<" is "<<BetterHCFof(num1,num2)<<endl;
	cout<<"The GCD/HCF of numbers "<<num1<<" and "<<num2<<" is "<<EuclidHCFof(num1,num2)<<endl;

	return 0;

}

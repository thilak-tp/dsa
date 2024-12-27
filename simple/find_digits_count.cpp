#include<iostream>
#include<math.h>
// A program to get the digits of a number and also display the number of digits in that number
using std::cout;
using std::cin;
using std::endl;
// Brute Force - O(logN+1) Complexity
int digitCount(int n)
{
	int count = 0;
	int digit = 0;
	while(n > 0)
	{
		digit = n % 10;
		cout<<"The digit is "<<digit<<endl;
		n /= 10;
		count++;
	}
	return count;

}

//Optimal Way -

int OpDigitCount(int n)
{

	return int(log10(n)+1);
}

int main()
{

	int n;
	cout<<"Enter a number to find the number of digits."<<endl;
	cin>>n;
	
	cout<<n<<" has "<<digitCount(n)<<" digits."<<endl;
	cout<<n<<" has "<<OpDigitCount(n)<<" digits."<<endl;

	return 0;


}

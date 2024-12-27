#include<iostream>

using std::cout;
using std::cin;
using std::endl;

// A funciton to reverse a given number
int reverse(int number)
{
        int digit;
        int numberReverse = 0;

        while(number > 0)
        {
                digit = number % 10;
                numberReverse = (numberReverse*10) +digit;
                number /= 10;

        }

        return numberReverse;
}

// A function to check if the give number is palidrome or not
bool isPalindrome( int number)
{
	int revNumber = reverse(number);
	if(number == revNumber)
		return true;
	else
		return false;
}

int main()
{
	int number;
	cout<<"Enter a number"<<endl;
	cin>>number;

	if(isPalindrome(number))
		cout<<"The number is palindrome"<<endl;
	else
		cout<<"The number is not palindrome"<<endl;

}

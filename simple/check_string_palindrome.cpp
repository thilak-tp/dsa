#include<iostream>
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::string;
// A function to check if the given string is palindrome or not

bool isPalindrome(string str)
{
	int start = 0;
	int end = str.length()-1;
	
	while(start < end)
	{
		if(str[start] != str[end])
			return false;
	}
	return true;
}

int main()
{
	string str;
	cout<<"Enter a string"<<endl;
	cin>>str;
	
	cout<<"The entered string is "<<str<<endl;
	if(isPalindrome(str))
		cout<<"The string is palindrome";
	else 	
		cout<<"The string is not palindrome";
	return 0;
}

#include<iostream>

using std::cout;
using std::cin;
using std::endl;

bool isLeapYear(int year)
{
	if((year%100!=0) && (year%4==0) || (year%400==0))
		return 1;
	else 
		return 0;
}

int main()
{
	int year;

	cout<<"Enter a year"<<endl;
	cin>>year;

	if(isLeapYear(year))
		cout<<"The year "<<year<<" is a leap year."<<endl;
	else

		cout<<"The year "<<year<<" is not a leap year."<<endl;
}

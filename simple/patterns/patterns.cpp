#include<iostream>

using std::cout;
using std::cin;
using std::endl;


/*
//The below function is for a pattern like below

****
****
****
****

*/
void SquarePattern(int n)
{
	for(int i=0; i<n ; i++)
	{
		for(int j=0;j<n; j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}

}
/*
The below function is for a pattern like below

*
**
***
****

*/
void LeftLeaningRightAngleTri(int n)
{
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<=i; j++ )
		{	
				cout<<"*";
		}
		cout<<endl;
	}

}
/*
The below function is for a pattern like below

1
12
123
1234

*/
void LeftLeaningRightAngleTriNumbers(int n)
{
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<=i; j++ )
		{	
				cout<<j+1;
		}
		cout<<endl;
	}

}
/*
The below function is for a pattern like below

1
22
333
4444

*/
void LeftLeaningRightAngleTriNumberRepeat(int n)
{
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=i; j++ )
		{	
				cout<<i;
		}
		cout<<endl;
	}

}

/*
The below function is for a pattern like below

****
***
**
*

*/
void LeftLeaningRightAngleTriInverter(int n)
{
	for(int i=0; i<n; i++)
	{
		for(int j=n; j>i; j-- )
		{	
				cout<<"*";
		}
		cout<<endl;
	}

}
/*
The below function is for a pattern like below

1234
123
12
1

*/
void LeftLeaningRightAngleTriInverterNumber(int n)
{
	for(int i=0; i<n; i++)
	{
		for(int j=n; j>i; j-- )
		{	
				cout<<n-j+1;
		}
		cout<<endl;
	}

}

int main()
{
	int n;
	cout<<"Enter the N values:"<<endl;
	cin>>n;
	//SquarePattern(n);
	LeftLeaningRightAngleTriInverterNumber(n);
	return 0;
}


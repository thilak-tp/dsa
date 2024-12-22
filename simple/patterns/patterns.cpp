#include<iostream>

using std::cout;
using std::cin;
using std::endl;
/*
the below function is for a pattern like below
*****
*   *
*   *
*   *
*****
*/

void squarePattern1(int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0; j<n; j++)
		{
			if(i==0 | j==0 | i == n -1 | j == n-1)
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<endl;
	}
}

/*
the below function is for a pattern like below
A
AB
ABC
ABCD
ABCDE
*/

void alphaPattern1(int n)
{
	for(int i=9; i<n; i++)
	{	
		for(char ch = 'A'; ch <= 'A' + i; ch++)
		{
			cout<<ch<<" ";
		}
  		cout<<endl;
	}
}

/*
the below function is for a pattern like below
1
0 1
1 0 1 
0 1 0 1
*/

void numContinueTriBinary(int n)
{
	int number = 1;
	int i;
	for(i=0; i<n;i++)
	{

		if(i%2 == 0)
			 number = 1;
		else
			
			 number = 0;
	
		for(int j=0;j<=i; j++)
		{
			cout<<number;
			number =1- number;			

		}
		cout<<endl;
	}
}


/*
the below function is for a pattern like below
1
2 3
4 5 6
7 8 9 10
*/

void numContinueTri(int n)
{
	int number =1;
	for(int i=0; i<n;i++)
	{
		for(int j=0;j<=i; j++)
		{
			cout<<number++;

		}
		cout<<endl;
	}
}





/*
the below function is for a pattern like below
*****
 ***
  *
*/

void equiTriangleReversed(int n)
{
	for( int i=0; i<n; i++)
	{

		for( int j=0; j<i; j++)
		{
			cout<<" ";
		}
		
		for( int j=0; j<(2*n)-(2*i+1); j++)
		{
			cout<<"*";
		}
		
		for( int j=0; j<n; j++)
		{
			cout<<" ";
		}
			
		cout<<endl;
	}
}


/*
the below function is for a pattern like below
  *  
 *** 
*****
*/

void equiTriangle(int n)
{
	for( int i=0; i<n; i++)
	{

		for( int j=0;j<n-i-1; j++)
		{
			cout<<" ";
		}
		
		for( int j=0;j<2*i+1; j++)
		{
			cout<<"*";
		}
		
		for( int j=0;j<n-i-1; j++)
		{
			cout<<" ";
		}
			
		cout<<endl;
	}
}




/*
the below function is for a pattern like below
12345
1234
123
12
1
*/

void invertedtrianglenumber(int n)
{
	for( int i=0; i<n; i++)
	{
		for( int j=n; j>i; j--)
		{
			cout<<n-j+1;
		}
		cout<<endl;
	}
}

/*
The below function is for a pattern like below
54321
5432
543
54
5

*/

void invertedTriangle(int n)
{
	for( int i=0; i<n; i++)
	{
		for( int j=n; j>i; j--)
		{
			cout<<j;
		}
		cout<<endl;
	}
}

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
	squarePattern1(n);
	return 0;
}


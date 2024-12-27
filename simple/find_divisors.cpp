#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
// A function to print all the divisors of a number

vector<int> findDivisors(int number)
{
	vector <int> divisors;
	int sqrtN = sqrt(number);
	
	for(int i = 1; i <= sqrtN; i++)
	{
		if(number % i == 0)
		{
			divisors.emplace_back(i);
			if(i != number/i)
			{
				divisors.emplace_back(number/i);
			}
		}
	}
	
	return divisors;
	
}

int main()
{	
	int number;
	cout<<"Enter a number"<<endl;
	cin>>number;
	
	vector <int> divisors = findDivisors(number);
	sort(divisors.begin(), divisors.end());
	for(auto it:divisors)
	{
		cout<<it<<" ";
	}
	cout<<endl;

	return 0;
}

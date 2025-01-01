#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int count = 0;
void printOne()
{
	if(count == 100)
		return;
	cout<<count<<endl;
	count++;

	printOne();
}


int main()
{
	printOne();
	return 0;
}

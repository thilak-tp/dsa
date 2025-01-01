#include<iostream>
#include<map>
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::map;
using std::string;

//A fuction to make hash map for the given string
void strHashMap(string str, map <char, int> &mpp)
{
	for(int i=0; i<str.length(); i++)
	{
		mpp[str[i]]++;
	}		
}

int main()
{
	string str;
	cout<<"Enter a string.\n";
	cin>>str;
	map <char, int> mpp;
	strHashMap(str, mpp);

	cout<<"The Hash Map for the string "<<str<<" is :"<<endl;
	for(auto it: mpp)
	{
		cout<<it.first<<" : "<<it.second<<endl;
	}
	return 0;
}

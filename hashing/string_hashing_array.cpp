#include<iostream>
#include<string>
using std::cout;
using std::cin;
using std::endl;
using std::string;


// A function to hash a string for all ASCII characters
void ASCIIHashIt(string str,int size, int *hashArr)
{
	for(int i=0; i<size; i++)
	{
		hashArr[str[i]]++;
	}

	for(int i =0; i<26; i++)
	{
		cout<<i<<" : "<<hashArr[i]<<endl;
	}
}
// A function to hash a string for only small letters
void strHashIt(string str,int size, int *hashArr)
{
	for(int i=1; i<=size; i++)
	{
		hashArr[str[i] - 'a']++;
	}

}

int main()
{
	string str;
	
	cout<<"Enter a String."<<endl;
	cin>>str;
	int size = str.length();
	int hashArr[27] = {0};
	int ASCIIhashArr[256] = {0};
	strHashIt(str,size,hashArr);
	char alpha = 'a';
	cout<<"Lowercase Hash array for the given string is:"<<endl;
	for(int i =0; i<26; i++)
	{
		cout<<i<<" : "<<alpha<<" : "<<hashArr[i]<<endl;
		alpha++;
	}
	
	ASCIIHashIt(str,size,ASCIIhashArr);
	alpha = '\0';

	cout<<"ASCII Hash array for the given string is:"<<endl;
	for(int i=0;i<256;i++)
	{
	
		cout<<i<<" : "<<alpha<<" : "<<ASCIIhashArr[i]<<endl;
		alpha++;

	}
	return 0;
}

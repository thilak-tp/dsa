#include<iostream>
#include<algorithm>
using namespace std;

string intToBinary(int n)
{
  string binary;
  while(n>0)
  {
    if(n%2==1)
      binary = binary + "1";
    else 
      binary = binary + "0";

    n /= 2;
  }
  reverse(binary.begin(), binary.end());
  return binary;
}

int main()
{

  int number;
  cout<<"Enter a number to convert to its binary."<<endl;
  cin>>number;
  
  cout<<"Binary representation of "<<number<<" is "<<intToBinary(number);
  
  return 0;
}

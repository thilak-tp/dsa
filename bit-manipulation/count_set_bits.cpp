#include<iostream>
#include<algorithm>
using namespace std;

int countSetBits(int n)
{
  string binary;
  int count = 0;
  while(n>0)
  {
    if(n%2==1)
    {
      binary = binary + "1";
      count ++ ;
    }

    else 
      binary = binary + "0";

    n /= 2;
  }
  reverse(binary.begin(), binary.end());
  return count;
}

int main()
{

  int number;
  cout<<"Enter a number to count its set bits."<<endl;
  cin>>number;
  
  cout<<"The number of set bits in "<<number<<" is "<<countSetBits(number);
  
  return 0;
}

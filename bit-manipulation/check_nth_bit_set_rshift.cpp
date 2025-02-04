#include<iostream>

using namespace std;

bool isBitSet(int number, int n)
{
  return  (number>>n) & 1 != 0;
}

int main()
{
  
  int number;
  int n;

  cout<<"Enter a number"<<endl;
  cin>>number;
  cout<<"Enter which bit to check"<<endl;
  cin>>n;
  
  if(isBitSet(number, n))
    cout<<"The "<<n<<"'th bit is set"<<endl;
  else
    cout<<"The "<<n<<"'th bit is not set"<<endl;

  return 0;
}

#include<iostream>

using namespace std;

int clearBit(int number, int n)
{
  return number&~(1<<n);
}
int main()
{
  int number;
  int n;
  
  cout<<"Enter a number"<<endl;
  cin>>number;

  cout<<"Enter the n value"<<endl;
  cin>>n;

  int cleared = clearBit(number, n);
  cout<<"After clear, the number is now "<<cleared<<endl;

  return 0;
}

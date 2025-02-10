#include<iostream>

using namespace std;

int removeRMSetBit(int number)
{
  return number&(number-1);
}
int main()
{
  int number;
  int n;
  
  cout<<"Enter a number"<<endl;
  cin>>number;


  int afterRemove = removeRMSetBit(number);
  cout<<"After set, the number is now "<<afterRemove<<endl;

  return 0;
}

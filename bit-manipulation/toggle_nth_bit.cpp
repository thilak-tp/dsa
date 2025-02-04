#include<iostream>

using namespace std;

int toggleBit(int number, int n)
{
  return number^(1<<n);
}
int main()
{
  int number;
  int n;
  
  cout<<"Enter a number"<<endl;
  cin>>number;

  cout<<"Enter the n value"<<endl;
  cin>>n;

  int toggled = toggleBit(number, n);
  cout<<"After set, the number is now "<<toggled<<endl;

  return 0;
}

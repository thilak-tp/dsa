#include<iostream>

using namespace std;

int setBit(int number, int n)
{
  return number|(1<<n);
}
int main()
{
  int number;
  int n;
  
  cout<<"Enter a number"<<endl;
  cin>>number;

  cout<<"Enter the n value"<<endl;
  cin>>n;

  int afterSet = setBit(number, n);
  cout<<"After set, the number is now "<<afterSet<<endl;

  return 0;
}

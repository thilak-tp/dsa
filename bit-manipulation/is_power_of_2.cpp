#include<iostream>

using namespace std;

bool isAPowerOf2(int number)
{
  return (number&(number-1) == 0);
}
int main()
{
  int number;
  
  cout<<"Enter a number"<<endl;
  cin>>number;

  if(isAPowerOf2(number))
    cout<<"It is a power of 2"<<endl;
  else 
    cout<<"It is not a power of 2"<<endl;


  return 0;
}

#include<iostream>

using namespace std;

void xorSwap(int num1, int  num2)
{
  num1 = num1 ^ num2;
  num2 = num1 ^ num2;
  num1 = num1 ^ num2;
  cout<<"After swapping num1 = "<<num1<<" and num2 = "<<num2<<endl;
}

int main()
{
  int number1;
  int number2;
  cout<<"Enter two numbers to swap"<<endl;
  cin>>number1>>number2;
  
  xorSwap(number1, number2);

  return 0;
}

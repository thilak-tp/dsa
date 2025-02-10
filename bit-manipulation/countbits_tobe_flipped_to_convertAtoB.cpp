#include<iostream>

using namespace std;

// A functtion to count the number of bits required to convert num1 to num2
int bitsToFlip(int num1, int num2)
{
  // XOR if both are same then 0 else 1
  int n = num1 ^ num2;
  int count = 0;
  // This result will contain the set bits, if we count these bits we'll get the bits to flip
   while(n>0)
  {
    if(n%2==1)
    {
      count ++ ;
    }

      n /= 2;
  }

  return count;

  
}

int main()
{
  int num1, num2;
  cout<<"Enter two numbers"<<endl;
  cin>>num1>>num2;
  int nBits = bitsToFlip(num1,num2);
  cout<<nBits<<" bits are to be flipped to convert "<<num1<<" into "<<num2;
  return 0;
}

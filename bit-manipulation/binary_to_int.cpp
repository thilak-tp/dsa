#include<iostream>

using namespace std;

int binaryToInt(string binary)
{
  int size = binary.size();
  int p1 = 1;
  int interger = 0;
  for(int i=size-1; i >=0; i--)
  {
  
    if(binary[i] == '1')
    {
      interger += p1;

    }

      p1 *= 2;
  }

  return interger;
}

int main()
{
  string binary;
  cout<<"Enter a binary number"<<endl;
  cin>>binary;
  cout<<"The decimal value of "<<binary<<" is "<<binaryToInt(binary)<<endl;
  return 0;
}

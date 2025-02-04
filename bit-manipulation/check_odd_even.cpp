#include<iostream>

using namespace std;

bool isOddEve(int number)
{
  return number&1 == 0;
}

int main()
{
   int number;
   cout<<"Enter a number"<<endl;
   cin>>number;
   if(isOddEve(number))
    cout<<"The number is even"<<endl;
   else
    cout<<"The number is odd"<<endl;
   return 0;
}

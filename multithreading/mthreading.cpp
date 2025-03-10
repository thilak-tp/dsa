#include<iostream>
#include<thread>

using namespace std;

void func1()
{
  for(int i=0; i< 200; i++)
    cout<<"+";
}


void func2()
{
  for(int i=0; i< 200; i++)
    cout<<"2";
}
int main()
{
  thread t1(func1);
  thread t2(func2);
  
  system("pause>nul");
  return 0;
}

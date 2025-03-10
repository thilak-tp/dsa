#include<iostream>

using namespace std;

int main(int argc, char *argv[])
{
  
  cout<<"Inside the program"<<endl;
  switch(argc){  
  case 1: cout<<"The user has not given any extra arguements to the application"<<endl;
          cout<<"The name of the program is "<<argv[0];
          break;
  case 2: cout<<"The user has given 1 extra arguement to the application"<<endl;
          cout<<"The name of the program is "<<argv[0]<<endl<<"The first arguement entered by the user is "<<argv[1];
          break;
  case 3: cout<<"The user has given 2 extra arguement to the application"<<endl;
          cout<<"The name of the program is "<<argv[0]<<endl<<"The first arguement entered by the user is "<<argv[1]<<endl<<"The second arguement entered by the user is "<<argv[2];
          break;
  }
  return 0;
}

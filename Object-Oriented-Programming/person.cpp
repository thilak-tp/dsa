#include<iostream>
#define PI 3.142
using namespace std;

class Person{
  
  string name;
  int age;
  string country;

  public:
  Person()
  {

  } 
  Person(string name, int age, string country)
  {
    this->name = name;
    this->age = age;
    this->country = country;

  }
  
  void enterDetails()
  { 
    cout<<"Enter the person's name"<<endl;
    cin>>this->name;
    cout<<"Enter the person's age"<<endl;
    cin>>this->age;
    cout<<"Enter the person's country"<<endl;
    cin>>this->country;

  } 

  void displayDetails()
  {
    cout<<"Name:"<<this->name<<endl;
    cout<<"Age: "<<this->age<<endl;
    cout<<"Country: "<<this->country<<endl;
  }

};

int main()
{
  Person p1;
  p1.enterDetails();
  p1.displayDetails();  

  return 0;
}

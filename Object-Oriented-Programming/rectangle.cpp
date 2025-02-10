#include<iostream>
#define PI 3.142
using namespace std;

class Rectangle{
  
  float length;
  float breadth;

  public:
  
  Rectangle(float length, float breadth)
  {
    this->length = length;
    this->breadth = breadth;

  }
  
  // A function to calculate the area of the circle
  float area()
  {
    return length * breadth;
  }
  
  // a function to calculate the circumference of the circle
  float circumference()
  {
    return 2*(length + breadth);
  }
  
};

int main()
{
  float length, breadth;
  
  cout<<"Enter the lenght of the rectangle"<<endl;
  cin>>length;
  cout<<"Enter the breadth of the rectangle"<<endl;
  cin>>breadth;
  
  Rectangle r1(length, breadth);
  
  cout<<"The area of the given circle is "<<r1.area()<<endl;
  cout<<"The circumference of the given circle is "<<r1.circumference()<<endl;

  return 0;
}

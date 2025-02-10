#include<iostream>
#define PI 3.142
using namespace std;

class Circle{
  float radius;
  public:
  Circle(float radius)
  {
    this->radius = radius;
  }
  // A function to calculate the area of the circle
  float area()
  {
    return PI*radius*radius;
  }
  
  // a function to calculate the circumference of the circle
  float circumference()
  {
    return 2*PI*radius;
  }
  
};

int main()
{
  float radius;
  
  cout<<"Enter the radius of the circle"<<endl;
  cin>>radius;
  
  Circle c1(radius);
  
  cout<<"The area of the given circle is "<<c1.area()<<endl;
  cout<<"The circumference of the given circle is "<<c1.circumference()<<endl;
  return 0;
}

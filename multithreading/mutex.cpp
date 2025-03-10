#include<iostream>
#include<thread>
#include<string>
#include<mutex>
using namespace std;

mutex carMutex;

void driveCar(string driver)
{
  unique_lock<mutex> carLock(carMutex);

  cout<<"The car is being driven by "<<driver<<endl;
  this_thread::sleep_for(chrono::seconds(2));
  cout<<driver<<" is done driving"<<endl;
  carLock.unlock();  
}

int main()
{
  thread t1(driveCar, "Thilak");  
  thread t2(driveCar, "Shubham");
  
  t1.join();
  t2.join();

  return 0;
}

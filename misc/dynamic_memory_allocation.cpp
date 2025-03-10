#include<iostream>

using namespace std;

int main()
{
  // Using malloc to declare a 10 size integer array
  int *ptr = (int*)malloc(10*sizeof(int));

  cout<<"Enter 10 elements"<<endl;
  for(int i=0; i<10; i++)
    cin>>ptr[i];

  cout<<"The entered elements are:"<<endl;
  
  for(int i=0; i<10; i++)
    cout<<ptr[i]<<" ";
  
  cout<<endl;
  
  // using calloc to declare a 10 size interger array with contingous memory allocated
  int *ptr2 = (int*)calloc(10,sizeof(int));
  
  cout<<"Enter 10 elements"<<endl;
  for(int i=0; i<10; i++)
    cin>>ptr2[i];

  cout<<"The entered elements are:"<<endl;
  
  for(int i=0; i<10; i++)
    cout<<ptr2[i]<<" ";
  
  cout<<endl;
  /*
  int *ptr3 = (int*) realloc(ptr, 12*sizeof(int));

  cout<<"Enter 12 elements"<<endl;
  for(int i=0; i<12; i++)
    cin>>ptr3[i];

  cout<<"The entered elements are:"<<endl;
  
  for(int i=0; i<12; i++)
    cout<<ptr3[i]<<" ";

  free(ptr2);
  free(ptr3);
*/
  // TODO realloc is not working properly

  // Dynamic memory allocation in C++
  // Using new to dynamically allocate 10 bytes of interger array
   
  int *ptr4 = new int[10];
  
  cout<<"Enter 10 elements"<<endl;
  for(int i=0; i<10; i++)
    cin>>ptr4[i];

  cout<<"The entered elements are:"<<endl;
  
  for(int i=0; i<10; i++)
    cout<<ptr4[i]<<" ";
  //deleting the dynamically allocated memory 
  delete(ptr4);
  return 0;
}

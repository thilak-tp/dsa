#include<iostream>
#include<vector>
#include<utility>
// A program to simulate an ATM giving denominations for an entered amount of cash

using namespace std;

vector <pair<int, int>> calculateDenominations(long amount){
  
  int notes[] = {2000,500,200,100};
  int idx = 0;
  int noteCount = 1;
  vector <pair<int,int>> result;
  while(amount>0)
  {
    noteCount = amount/notes[idx];
    if(noteCount>0)
    {
      result.push_back({notes[idx], noteCount});
    }
    amount = amount % notes[idx++];
  }

  return result;
}
int main()
{
  long amount = 0;
  cout<<"Enter an amount to get from the ATM"<<endl;
  cin>>amount;
  
  vector <pair<int, int>> result = calculateDenominations(amount);
  
  for(auto it: result)
  {
     cout<<"Note: "<<it.first<<" | ";  
     cout<<"Denominations: "<<it.second<<endl;

  }
  return 0;
}

#include<iostream>
#include<map>

using namespace std;

int main()
{
  map <int, int> mp;
  mp[1] = 1;
  mp[2] = 2;
  mp[3] = 3;
  mp[4] = 4;
  mp[5] = 5;
  pair <int,int> element = {7,7};  


  //Inseting a key value pair into the map
  mp.insert(element);
  for(auto it: mp)
    cout<<"Key : "<<it.first<<" | value : "<<it.second<<endl;  

  // To find a key in the map
  int key = 2;
  auto it =mp.find(key);
  if(it != mp.end())
   cout<<"Key "<<it->first<<" Value "<<it->second<<endl;
  else
    cout<<"Key"<<key<<" Value: Not found"<<endl;
  return 0;
}

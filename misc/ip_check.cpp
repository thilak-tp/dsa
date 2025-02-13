#include<iostream>
#include<regex>
#include<string>

// IPv4 Addres - 174.192.30.70 - Valid with numbers being from 0-255, 4 sets separeated by .
// IPv6 Address - O260:OABF:1234:3682:OEAB:BOAD:321F - Valid if there are numbers in 0000- FFFF
// 8 sets, separated by a colon :

using namespace std;

int ipType(string ip)
{
  regex 
  v4("(([0-9]|[1-9][0-9]|1[0-9][0-9]|2[0-4][0-9]|25[0-5])\\.){3}([0-9]|[1-9][0-9]|1[0-9][0-9]|2[0-4][0-9]|25[0-5])");

  regex v6("((([0-9a-fA-F]){1,4})\\:){7}(([0-9a-fA-F]){1,4})");
  
if(regex_match(ip,v4))
    return 1;
else if(regex_match(ip, v6))
  return 2;
else 
  return -1;
  
}


int main()
{
  string ip;
  cout<<"Enter an IP Address (Either IPv4 or IPv6"<<endl;
  cin>>ip;
  
  int flag = ipType(ip);
  
  if(flag == 1)
    cout<<"The given IP is a valid IPv4 Address"<<endl;
  else if(flag == 2)
    cout<<"The given IP is a valid IPv6 Address"<<endl; 
  else
    cout<<"The given IP is not a valid IP Address"<<endl;

  return 0;
}


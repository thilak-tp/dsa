#include<iostream>
#include<stack>
#include<string>

using namespace std;

bool isValid(string s)
{
  stack<char> st;
  for(auto it:s)
  {
    if(it== '('|| it == '[' || it == '{') st.push(it);
    else{
          if(st.size() == 0) return false;
          char ch = st.top();
          st.pop();
          if(( it == ')' and ch == '(') or ( it == '}' and ch =='{') or (it == ']' and ch== '[') ) continue;
          else return false;
        } 

  }

  return st.empty();
}
int main()
{

  string expr;
  cout<<"Enter an expression"<<endl;
  cin>>expr;
  if(isValid(expr))
    cout<<"Valid Paranthesis"<<endl;
  else
    cout<<"Invalid Paranthesis"<<endl;

  return 0; 
}

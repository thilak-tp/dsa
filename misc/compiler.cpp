#include<iostream>
#include<string>
#include<stack>
// A program to check if the code is properly scoped, paranthesis closed or not

using std::cout;
using std::cin;
using std::endl;

// A compiler class
class Compiler{
  public:
    bool isBalanced(std::string code);
};

// A function that checks for parenthesis, braces and square bracket balance
bool Compiler::isBalanced(std::string code)
{
  std::stack<char> st;
  
  // Iterating through all the characters of given code string
  for(auto it : code)
  {
    // We switch on the characters recevied
    switch(it){
    // If the characters are open braces, parenthesis or square brackets then push them into stack
    case '{':
    case '(':
    case '[':
          st.push(it);
          break;

    //Next while if we find a closing bracket, parenthesis or a square bracket we check if 
    // its opposite is already there in the stack, if available we pop the element from the stack
    case '}':
          if(st.empty() || st.top() != '{')
            return false;
          st.pop();
          break;

    case ')':
          if(st.empty() || st.top() != '(')
            return false;
          st.pop();
          break;

    case ']':
          if(st.empty() || st.top() != '[')
            return false;
          st.pop();
          break;
    }
  }
  
  // At the end if the stack is empty we can say that the code is balanced
  return st.empty()?true : false;

}

int main()
{
  std::string code;
  Compiler c1;
  cout<<"Enter C++ code to check if it compiles or not"<<endl;
  std::getline(std::cin, code);
  cout<<"The entered code is"<<endl<<code<<endl;
  if(c1.isBalanced(code))
    cout<<"The code has compiled properly"<<endl;
  else
    cout<<"Syntax Error! The code has not compiled properly"<<endl;

  
  return 0;
}

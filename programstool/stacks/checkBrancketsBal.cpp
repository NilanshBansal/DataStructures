If Brackets are balanced ?
Send Feedback
Given a string expression, check if brackets present in the expression are balanced or not. Brackets are balanced if the bracket which opens last, closes first.
You need to return true if it is balanced, false otherwise.
Sample Input 1 :
{ a + [ b+ (c + d)] + (e + f) }
Sample Output 1 :
true
Sample Input 2 :
{ a + [ b - c } ]
Sample Output 2 :
false

#include<stack>
bool checkBalanced(char *exp) {
	// Write your code here
stack <char> help;
  int i;
  int len=0;
  int p=0;
  while(exp[p]!='\0')
  {
    len++;
    p++;
  }
  for(i=0;i<len;i++)
  {
    if(exp[i]=='{')
    {
      help.push('}');
    }
    if(exp[i]=='[')
    {
      help.push(']');
    }
    if(exp[i]=='(')
    {
      help.push(')');
    }
    if(exp[i]=='}')
    {
       if(help.empty()==true)
        {
          return false;
        }
      if(help.top()=='}')
      {
        help.pop();
      }
      else
      {
        return false;
      }
    }
    if(exp[i]==']')
    {
       if(help.empty()==true)
        {
          return false;
        }
      if(help.top()==']')
      {
        help.pop();
      }
      else
      {
        return false;
      }
    }
    if(exp[i]==')')
    {
              if(help.empty()==true)
        {
          return false;
        }
      if(help.top()==')')
      {
        help.pop();
      }
      else
      {
        return false;
      }
    }
    i++;
  }
  if(help.empty()==true)
  {
    return true;
  }
  return false;
}
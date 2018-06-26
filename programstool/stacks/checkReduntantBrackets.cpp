Check redundant brackets
Send Feedback
Given a string mathematical expression, return true if redundant brackets are present in the expression. Brackets are redundant if there is nothing inside the bracket or more than one pair of brackets are present.
Assume the given string expression is balanced and contains only one type of bracket i.e. ().
Note: You will not get partial score for this problem. You will get marks only if all test cases are passed.
Input Format :
String s (Expression)
Output Format :
true or false
Sample Input 1:
((a + b)) 
Sample Output 1:
true
Sample Input 2:
(a+b) 
Sample Output 2:
false

#include<stack>
bool checkRedundantBrackets(char *input) {
	// Write your code here
stack<int> help;
  int i=0;
  while(input[i]!='\0')
  {
    while(input[i]!=')')
    {
      help.push(input[i]);
      i++;
    }
    i++;
    if(help.top()=='(')
    {
      return true;
    }
    else
    {
      while(help.empty()!=true && help.top()!='(')
      {
        help.pop(); 
      }
      help.pop();
    }
    
  }
  return false;
}
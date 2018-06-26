/*
   Suppose you have a string made up of only 'a' and 'b'. Write a recursive function that checks if the string was generated using the following rules:

a. The string begins with an 'a'
b. Each 'a' is followed by nothing or an 'a' or "bb"
c. Each "bb" is followed by nothing or an 'a'
If all the rules are followed by the given string, return true otherwise return false.

Sample Input:

abb
Sample Output:

true



*/
bool checkabhelper(char input[],int si)
{
    bool d;

  if(input[0]!='a')
  return false;

  if(input[si]=='\0')
  {
      return true;
  }
if(input[si]!='a' && input[si]!='b')
return false;
if(input[si]=='a')
{

   if(input[si+1]!='\0')
   {
      if(input[si+1]!='a')
       {
          if(input[si+1]!='b')
          {
             return false;
          }
          else if(input[si+1]=='b')
          {
              if(input[si+2]!='b')
               return false;
          }

       }
   }






}

if(input[si]=='b')
{
    if(input[si+1]=='\0')
    return false;
    if(input[si+1]!='b')
    return false;
    if(input[si+1]=='b')
    {
        if(input[si+2]!='\0')
        {
        if(input[si+2]!='a')
        return false;
        }
        if((input[si+2]=='\0')||(input[si+2]=='a'))
          {
              si=si+1;
          }
    }


}

d=checkabhelper(input,si+1);
return d;

}



bool checkAB(char input[]) {
    // Write your code here
    bool d=checkabhelper(input,0);
return d;
}





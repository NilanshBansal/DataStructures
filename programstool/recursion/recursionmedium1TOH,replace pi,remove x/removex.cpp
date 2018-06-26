/*
Remove X
Given a string, compute recursively a new string where all 'x' chars have been removed.

Sample Test 1 :

Input :

xaxb

Output :

ab

Sample Test 2 :

Input :

abc

Output :

abc

Sample Test 3 :

Input :

xx

Output:

*/


void removeXHelper(char input[],int si)
{
    int i,l=1;
 for(i=0;input[i]!='\0';i++)
  l++;
  
  if(input[si]=='\0')
   return;
  
  if((input[si]=='x')||(input[si]=='X'))
   {
       for(i=si;i<l-1;i++)
        {
            input[i]=input[i+1];
        }
        input[i]='\0';
        removeXHelper(input,si);
        
   }
  else
    {
       removeXHelper(input,si+1);    
    }
  
  
  

}


void removeX(char input[]) {
    // Write your code here
 
  removeXHelper(input,0);
}
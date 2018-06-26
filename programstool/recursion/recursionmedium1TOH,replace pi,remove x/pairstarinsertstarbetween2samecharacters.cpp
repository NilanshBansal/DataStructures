/*
Pair star
Given a string, compute recursively a new string where identical chars that are adjacent in the original string are separated from each other by a "*".

Sample Test 1:

Input :

hello

Output :

hel*lo

Sample Test 2:

Input :

xxyy

Output :

x*xy*y

Sample Test 3 :

Input :

aaaa

Output :

a*a*a*a


*/



void pairStarHelper(char input[],int si)
{
     int i,len=1;
     char temp;
 for(i=0;input[i]!='\0';i++)
  len++;
  
  if(input[si]=='\0')
   return;
  
  if(input[si]==input[si+1])
   {
       
       
       for(i=len-1;i>si+1;i--)
        {
            input[i]=input[i-1];
            
        }
        input[si+1]='*';
        input[len]=NULL;
       pairStarHelper(input,si+2); 
       
   }
  
  else
   pairStarHelper(input,si+1); 

}
void pairStar(char input[]) {
    // Write your code here
pairStarHelper(input,0);
}
/*Print Keypad
Suggest Edit
Given an integer n, using phone keypad find out and print all the possible strings that can be made using digits of input n.

Note : The order of strings are not important. Just print different strings in new lines.

Sample Input:

23
Sample Output:

ad
ae
af
bd
be
bf
cd
ce
cf

*/


#include<iostream>
#include<string.h>
using namespace std;
/***
You need to save all the strings in the given 2D output array. And return the number of strings(i.e. number of rows filled in output) from the given function.

Don’t print the strings, just save them in output.
***/
string codegenerator(int digit)
{ string s;
        switch(digit)
        {
            case 2:s="abc";
                      break;
            
            case 3:s="def";
                      break;
                      
            case 4:s="ghi";
                      break;
            case 5:s="jkl";
                      break;
            case 6:s="mno";
                      break;
            case 7:s="pqrs";
                      break;          
            case 8:s="tuv";
                      break;
            case 9:s="wxyz";
                      break;          
                      
            
            
        }
        
        
       return s; 
    
    
    
}

int printhelper(int num,char output[10000][1000])
{
     string s;
     int i,j;
   if(num==0||num==1)
   { 
       return 0;
   }
   
  
  
    
        s=codegenerator(num%10);
    
   
   
  int d=printhelper(num/10,output); 
   
   if(d==0)
   {
   for(i=0;s[i]!=NULL;i++)
   {
       output[i][0]=s[i];
       output[i][1]=NULL;
   }
    return i;
  }    
  int count=0;
  int lens=s.size();
  int curlen=strlen(output[0]);
  j=0;
  for(i=0;i<lens*d;i++)
  {
      count++;
     
    /* if(i%lens==0)
     {
         j=0;
     }
      
     */
    
     
     if(i<lens*d-d)
      strcpy(output[d+i],output[i]);
      
      output[i][curlen]=s[j];
       output[i][curlen+1]=NULL;
      
     if(count%d==0)
     {
         j++;
     } 
      
  }
  
  return lens*d;
 
    
    
}



void printKeypad(int n) {
	// Write your code here
	char output[10000][1000];
	 int k=printhelper(n,output);
  
  for(int i=0;i<k;i++)
  {
      cout<<output[i]<<endl;
  }
  
  
  
  
}



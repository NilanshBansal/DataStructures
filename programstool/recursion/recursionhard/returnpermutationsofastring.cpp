
/*
Given a string, find and return all the possible permutations of the input string.

Note : The order of permutations are not important.

Sample Input :

abc
Sample Output :

abc
acb
bac
bca
cab
cba

*/

// this function returns number of rows that are filled in output
#include<string.h>
#include<algorithm>
#include<math.h>
#include<iostream>
using namespace std;

 void printhelper(char input[],int si,char output[][50],int ei, int &row)
  {
     int i;
      
      if(si==ei)
        //cout<<input<<endl;
       {
         strcpy(output[row],input);
         row++;
       }    
      
      for(i=si;i<=ei;i++)
      {
          swap(input[si],input[i]);
          printhelper(input,si+1,output,ei, row);
          swap(input[i],input[si]);

      }
      
      
      
  }




int permutations(char input[], char output[][50]) 
 {	
    int d=strlen(input);
    int row=0;
 printhelper(input,0,output,d-1,row);
 return row;
}
   
   
   
    

/*

Given a string, find and print all the possible permutations of the input string.

Note : The order of permutations are not important. Just print them in different lines.

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

#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;

void printhelper(char input[],int si,int ei)
  {
     int i;
      if(si>ei)
        return;
      if(si==ei)
        cout<<input<<endl;
      for(i=si;i<=ei;i++)
      {
          swap(input[si],input[i]);
          printhelper(input,si+1,ei);
          swap(input[i],input[si]);

      }
  }
void printPermutations(char input[]) {
    // Write your code here
    int d=strlen(input);
 printhelper(input,0,d-1);
}


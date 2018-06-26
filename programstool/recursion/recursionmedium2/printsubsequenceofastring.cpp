/*
if   abc is the entered string then subsequences are :

"" (the double quotes just signifies an empty string, don't worry about the quotes)
c 
b 
bc 
a 
ac 
ab 
abc 

*/ 




#include <iostream>
using namespace std;
void printSubs(char input[],char oSoFar[],int si,int oi)
{
    if(input[si]=='\0')
    {
        oSoFar[oi]='\0';
        cout<<oSoFar<<endl;
        return;
    }
    printSubs(input,oSoFar,si+1,oi);
    oSoFar[oi]=input[si];
    printSubs(input,oSoFar,si+1,oi+1);
}
    
void printSubsequences(char input[]) {
    char out[100];
    printSubs(input,out,0,0);
}
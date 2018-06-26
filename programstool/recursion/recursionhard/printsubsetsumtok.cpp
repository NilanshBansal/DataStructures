/*
  Given an array A and an integer K, print all subsets of A which sum to K.

Subsets are of length varying from 0 to n, that contain elements of the array. But the order of elements should remain same as in the input array.

Note : The order of subsets are not important. Just print them in different lines.

Input format :

Line 1 : Size of input array

Line 2 : Array elements separated by space

Line 3 : K

Sample Test:

Input:

9 
5 12 3 17 1 18 15 3 17 
6
Output:

3 3
5 1
  



*/

#include <iostream>
using namespace std;

void printhelper(int input[], int n, int k,int si,int output[],int oi)
{ int i,sum=0;
    if(si==n)
    {
      for(i=0;i<oi;i++)
       {
         sum+=output[i];  
       }
    
       if(sum==k)
        {
          for(i=0;i<oi;i++)
          {
           cout<<output[i]<<" ";  
          } 
          cout<<endl;
          
      }
    
     return;   
    }
    
    
  printhelper(input,  n,  k,si+1,output, oi);
  
  output[oi]=input[si];
  
  printhelper(input, n, k,si+1,output, oi+1);
    
}

void printSubsetSumToK(int input[], int n, int k) {
    // Write your code here
  int output[100];  
printhelper(input,n,k,0,output,0) ;   
    
}
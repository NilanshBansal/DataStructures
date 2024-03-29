/*
Given an integer array (of length n), find and return all the subsets of input array.

Subsets are of length varying from 0 to n, that contain elements of the array. But the order of elements should remain same as in the input array.

Note : The order of subsets are not important.

Input format :

Line 1 : Size of array

Line 2 : Array elements (separated by space)

Sample Input:

3
15 20 12

Sample Output:

[] (this just represents an empty array, don't worry about the square brackets)
12 
20 
20 12 
15 
15 12 
15 20 
15 20 12 


*/

#include <iostream>
using namespace std;

void printhelper(int input[],int output[],int n,int si,int oi)
{
    if(si==n)
     {
         for(int i=0;i<oi;i++)
          cout<<output[i]<<" ";
          cout<<endl;
          return;
     }
   
    
  printhelper( input,output,n, si+1,oi);//include nahi karre
  
   output[oi]=input[si];
       
   
  
  printhelper(input,output,n,si+1,oi+1);//include karre h
    
}

void printSubsetsOfArray(int input[], int n) {
	// Write your code here
	int output[100];
  printhelper(input,output,n,0,0);  
}
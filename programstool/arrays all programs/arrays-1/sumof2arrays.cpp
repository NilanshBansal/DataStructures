// input1 - first array
// size1 - size of first array
// input2 - second array
// size2 - size of second array
// output - array in which sum is to be stored
#include<iostream>
using namespace std;
void sumOfTwoArrays(int arr1[], int size1, int arr2[], int size2, int arr3[]){
	// Write your code here	
 int size3,i,j,k,sum=0;
 if(size1>=size2)
  size3=size1+1;
 
 else
   size3=size2+1;
   
  k=size3-1;
  
  for(i=size1-1,j=size2-1;i>=0 && j>=0 ;i--,j--)
    {
        sum+=arr1[i]+arr2[j];
        
        if(sum>9)
          {
              arr3[k--]=sum%10;
              sum=sum/10;
          }
          
        else
          {
              arr3[k--]=sum;
              sum=0;
          }
            
    }
    
  if(j<0)
   {
       for(;i>=0;i--)
        {
            arr3[k--]=sum+arr1[i];
            sum=0;
        }
        arr3[k]=0;
   }
   
  if(i<0)
   {
       for(;j>=0;j--)
        {
            arr3[k--]=sum+arr2[j];
            sum=0;
        }
        arr3[k]=0;
   } 
  arr3[0]=sum;
  
  
  
 
  
}
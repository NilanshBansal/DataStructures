#include<iostream>
using namespace std;
// arr - input array
// size - size of array
// x - sum of triplets
void FindTriplet(int arr[], int size, int x) {
	// Write your code here
    int i,j,k=0,temp,l;
  for(i=0;i<size;i++)
    {
        for(j=0;j<size-i-1;j++)
          {
              if(arr[j]>arr[j+1])
                {
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
          }
    }
    
 
 for(l=0;l<size;l++)
  {
     x=x-arr[l];
     i=l+1,j=size-1; 
     while(i<j)
      {
          if(arr[i]+arr[j]<x)
           i++;
          else if(arr[i]+arr[j]>x)
           j--;
          else if(arr[i]+arr[j]==x)
           {
               cout<<arr[l]<<" "<<arr[i]<<" "<<arr[j]<<endl;
               j--;
               i++;
           }
      }
    
  }
    
}
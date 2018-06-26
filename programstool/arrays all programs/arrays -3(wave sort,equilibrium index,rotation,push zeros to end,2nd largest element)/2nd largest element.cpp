#include<iostream>
using namespace std;
// arr - input array
// n - size of array
int FindSecondLargest(int arr[], int n){
	// Write your code here
int i,max1=arr[0],max2=arr[1],temp;
if(max1<=max2)
{
    temp=max1;
    max1=max2;
    max2=temp;
}
if(n==2)
return max2;
for(i=0;i<n;i++)
 {
     if(arr[i]>=max1)
      {
          max2=max1;
          max1=arr[i];
      }
     else if(arr[i]>=max2&&arr[i]<=max1)
      max2=arr[i];
 }
 return max2;
}
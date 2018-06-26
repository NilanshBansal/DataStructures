#include<iostream>
#include<algorithm>
using namespace std;
// arr - input array
// size - size of array
int FindDuplicate(int arr[], int size){
    int i;
sort(arr,arr+size);
/*cout<<"displaying sorted array: \n";
for(i=0;i<size;i++)
{
    cout<<arr[i]<<" ";
}
*/
if(arr[0]!=arr[1])
 return arr[0];
for(i=1;i<size;i++)
 { 
    if(i==size-1)
     {
         return arr[size-1];
     }
     if(arr[i]!=arr[i-1] && arr[i]!=arr[i+1] )
      return arr[i];
 }
 
}


#include<iostream>
using namespace std;
// arr - input array
// n - size of array
void PosAndNega(int arr[], int n){
	// Write your code here
int sump=0,sumn=0;
int i;
for(i=0;i<n;i++)
 {
     if(arr[i]>0)
     sump+=arr[i];
     else if(arr[i]<0)
     sumn+=arr[i];
     
    
 }
 cout<<sump<<endl<<sumn;
}
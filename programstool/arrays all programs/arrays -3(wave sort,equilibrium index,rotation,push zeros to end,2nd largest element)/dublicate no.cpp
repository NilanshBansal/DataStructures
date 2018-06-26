/*Duplicate in array
Find the duplicate number in an array of size n with numbers from 0 to n-2. Each number is present at least once.

Sample Test:

Input:

9
0 7 2 5 4 7 1 3 6
Output:

7
*/

//METHOD 1 80 MARKS out of 100
#include<iostream>
using namespace std;
// arr - input array
// size - size of array

int missinghelper(int arr[],int si,int ci,int size)
{int i=ci;
  for(;i<size;i++)
   {
       if(arr[si]==arr[i])
        {
            return arr[si];
        }
   }
  
   int d=missinghelper(arr,si+1,si+2,size);
   if((d>=0)&&(d<=size-2))
   return d;
  
   



}
int MissingNumber(int arr[], int size){
    // Write your code here
int t=missinghelper(arr,0,1,size);
return t;


}


//METHOD2 60 MARKS
// arr - input array
// size - size of array
int MissingNumber(int arr[], int size){
	// Write your code here
int temp[100000],i;
  for(i=0;i<100000;i++)
    {
        temp[i]=-1;
    }
    
    for(i=0;i<size;i++)
      {
          if(temp[arr[i]]==1)
           return arr[i];
           
          else
            {
                temp[arr[i]]=1;
            }
      }
      return -1;
}


//METHOD 3
//by sorting 100marks

#include<iostream>
#include<algorithm>

using namespace std;

// arr - input array
// size - size of array
int MissingNumber(int arr[], int size){
	// Write your code here
 int i;
 sort(arr,arr+size);

   
    for(i=0;i<size;i++)
    {
        if(arr[i]==arr[i+1])
         return arr[i];
    }
    return -1;
}


//method 4
//using map 20 marks out of 100


#include<iostream>
#include<map>
using namespace std;

// arr - input array
// size - size of array
int MissingNumber(int arr[], int size){
	// Write your code here
 int i;
 map<int,int>m;
  for(i=0;i<size;i++)
   { m[arr[i]]++;
   }
   
    for(i=0;i<size;i++)
    {
        if(m[arr[i]]>1)
        { return arr[i];
         break;
        }
    }
 
}
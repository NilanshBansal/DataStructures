/*WAVE SORT
 a1 >= a2 <=a3 >= a4 <= a5>= a6....

/*


#include<iostream>
using namespace std;
// arr - input array
// n - size of array
void sortInWave(int arr[], int n) {
	// Write your code here
int i,temp;
 for(i=0;i<n-1;i++)
  {
    if(i%2==0)
     {
         if(arr[i]<arr[i+1])
         {temp=arr[i+1];
         arr[i+1]=arr[i];
         arr[i]=temp;
         }
     }
     else if(i%2!=0)
      {
          if(arr[i]>arr[i+1])
          {
              temp=arr[i+1];
         arr[i+1]=arr[i];
         arr[i]=temp;
          }
      }
    
  }



}

*/


Given a two dimensional n*m array, print the array in a sine wave order. i.e. print the first column top to bottom, next column bottom to top and so on.
Note : Print the elements separated by space.
Input format :
Line 1 : Two integers n and m, No. of rows & No. of columns (separated by space)
Next n lines : ith row elements (separated by space)
Sample Input :
3 4
1  2  3  4 
5  6  7  8 
9 10 11 12
Sample Output :
1 5 9 10 6 2 3 7 11 12 8 4




#include <iostream>
using namespace std;

void wavePrint(int input[][1000], int row, int col){
	/* Don't write main().
	* Don't read input, it is passed as function argument.
	* Print output and don't return it.
	* Taking input is handled automatically.
	*/
  int i,j;
 for(j=0;j<col;j++)
  {
   if(j%2==0)
   {
     i=0;
   }
   else
   {
     i=row-1;
   }
	if(i==0)
    {
    for(;i<row;i++)
    {
      cout<<input[i][j]<<" ";
    }
    }
   else
   {
   for(;i>=0;i--)
   {
     cout<<input[i][j]<<" ";
   }
   }
  }
}


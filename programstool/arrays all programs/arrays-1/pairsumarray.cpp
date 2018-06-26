#include <iostream>
#include<algorithm>
using namespace std;

void pairSum(int input[], int size, int x) {
	// Write your code here
sort(input,input+size);
int i=0,j=size-1;
  while(i<j)
   {
     if(input[i]+input[j]>x)
      {
          j--;
      }
    else if(input[i]+input[j]<x)
    {
        i++;
    }
    else if(input[i]+input[j]==x)
     {
         cout<<input[i]<<" "<<input[j]<<endl;
         j--;
         i++;
     }

   }
}

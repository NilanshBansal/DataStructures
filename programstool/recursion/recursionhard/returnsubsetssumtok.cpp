/*
   Given an array A and an integer K, return all subsets of A which sum to K.

Subsets are of length varying from 0 to n, that contain elements of the array. But the order of elements should remain same as in the input array.

Note : The order of subsets are not important.

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

/***
You need to save all the subsets in the given 2D output array. And return the number of subsets(i.e. number of rows filled in output) from the given function.

In ith row of output array, 1st column contains length of the ith subset. And from 1st column actual subset follows.
For eg. Input : {1, 3, 4, 2} and K = 5, then output array should contain
	{{2, 1, 4},	// Length of this subset is 2
	{2, 3, 2}}	// Length of this subset is 2

Don’t print the subsets, just save them in output.
***/
int subsethelper(int input[], int n,int si, int output[][50],int output2[],int oi, int k, int row)
 {
   if(si==n)
   { int sum=0;
     for(int i=0;i<oi;i++)
      { sum+=output2[i];
      }
      
     if(sum==k)
      {
          output[row][0]=oi;
          
        for(int i=0;i<oi;i++)
         output[row][i+1] = output2[i];
         return row+1; 
      }
       
     return row ;
   }
   
  row = subsethelper(input, n,si+1, output,output2,oi, k, row);
  
  output2[oi]=input[si];
  
  row = subsethelper(input, n,si+1, output,output2,oi+1, k, row);    
  
     
 }

int subsetSumToK(int input[], int n, int output[][50], int k) {
    // Write your code here
    int output2[100];
int d=subsethelper(input,n,0,output,output2,0,k, 0);

return d;
}
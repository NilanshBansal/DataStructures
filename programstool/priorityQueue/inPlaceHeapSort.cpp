In place Heap sort
Send Feedback
Given an integer array of size n. Sort this array (in decreasing order) using heap sort.
Space complexity should be O(1).
Input Format :
Line 1 : Integer n, Array size
Line 2 : Array elements, separated by space
Output Format :
Array elements after sorting
Constraints :
1 <= n <= 10^6
Sample Input:
6 
2 6 8 5 4 3
Sample Output:
8 6 5 4 3 2



void inplaceHeapSort(int input[], int n){
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Change in the given input itself.
     * Taking input and printing output is handled automatically.
     */
int i=1;
  int parentI,childI;
  while(i!=n)
  {
    childI=i;
    while(childI>0)
    {
      parentI=(childI-1)/2;
    if(input[childI]>input[parentI])
    {
      break;
    }
    int temp=input[childI];
    input[childI]=input[parentI];
    input[parentI]=temp;
    childI=parentI;
    }
    i=i+1;
  }
  i=n-1;
  while(i>0)
  {
    int ans=input[0];
    input[0]=input[n-1];
    input[n-1]=ans;
    parentI=0;
    while(parentI<i)
    {
      int leftI=2*parentI + 1;
      int rightI=2*parentI+2;
      int minI=parentI;
      if(leftI<i && input[leftI]<input[minI])
      {
        minI=leftI;
      }
      if(rightI<i && input[rightI]<input[minI])
      {
        minI=rightI;
      }
      if(minI==parentI)
      {
        break;
      }
      int temp=input[parentI];
      input[parentI]=input[minI];
      input[minI]=temp;
      parentI=minI;
    }i--;
  }
}

/*Array Equilibrium Index
Find equilibrium index of an array. Equilibrium index of an array is an index i such that the sum of elements at indexes less than i is equal to the sum of elements at indices greater than i.

Sample Input:

7
-7 1 5 2 -4 3 0
Output:

3 
*/




// arr - input array
// n - size of array
int equilibrium(int arr[], int n) {
	// Write your code here
    int i,sum1=0,sum2=0;
    for(i=0;i<n;i++)
    {
        sum1+=arr[i];
    }
 
    for(i=0;i<n;i++)
     {  
         if(sum2==sum1-arr[i]-sum2)
          return i;
         sum2+=arr[i]; 
     }
}
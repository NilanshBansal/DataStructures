/*Check array rotation
A sorted array has been rotated by some number k in clockwise direction. Find k.

Input format: Input contains size of the array followed by the array

Output format: Print the answer

Sample Test:

Input:

6

5 6 1 2 3 4

Output:

2

*/


// arr - input array
// n - size of array
int FindSortedArrayRotation(int arr[], int n) {
	// Write your code here
    int i;
 for(i=0;i<n-1;i++)
 {
     if(arr[i+1]<arr[i])
     return i+1;
 }
 return n;
}
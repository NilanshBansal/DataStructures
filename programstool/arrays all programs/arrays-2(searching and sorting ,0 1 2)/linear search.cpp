// arr - input array
// n - size of array
// val - element to be searched
int linearSearch(int arr[], int n ,int val){
	// Write your code here
  int i;
  for(i=0;i<n;i++)
   {
     if(arr[i]==val)
      return i;
   }
   return -1;
}
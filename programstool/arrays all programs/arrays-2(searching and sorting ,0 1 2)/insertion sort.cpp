// arr - input array
// n - size of array
void InsertionSort(int arr[], int n){
	// Write your code here
    int temp,i,j;
  for(i=1;i<n;i++)
    { j=i;
      while((j>0) && (arr[j-1]>arr[j]))
      {
          temp=arr[j-1];
          arr[j-1]=arr[j];
          arr[j]=temp;
          j--;
      }
    }
}
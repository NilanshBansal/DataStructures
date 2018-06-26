// arr - input array
// n - size of array
void BubbleSort(int arr[], int n){
	// Write your code here
 int i,j,temp;
 for(i=0;i<n;i++)
  {
      for(j=0;j<n-1;j++)
        {
            if(arr[j]>arr[j+1])
             {
                 temp=arr[j];
                 arr[j]=arr[j+1];
                 arr[j+1]=temp;
             }
        }
  }
}
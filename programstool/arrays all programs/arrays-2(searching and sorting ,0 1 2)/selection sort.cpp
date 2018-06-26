// arr - input array
// n - size of array
void SelectionSort(int arr[], int n) {
	// Write your code here
  int i,j,pos,temp;
  for(i=0;i<n;i++)
    {
        
        pos=i;
        for(j=i+1;j<n;j++)
          {
              if(arr[j]<arr[pos])
                {
                    
                    pos=j;
                }
                
          }
          temp=arr[i];
          arr[i]=arr[pos];
          arr[pos]=temp;
    }

}
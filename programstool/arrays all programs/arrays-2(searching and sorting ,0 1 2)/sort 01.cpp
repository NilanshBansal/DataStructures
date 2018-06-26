// arr - input array
// n - size of array
void SortZeroesAndOne(int arr[], int n){
	// Write your code here
int i=0,j;
 // int a[100],n;
  //cout<<"how many values to enter: ";
  //cin>>n;

  j=n-1;
  while(i<j)
   {
       if(arr[i]==1&&arr[j]==0)
       {
           arr[i]=arr[i]+arr[j];
           arr[j]=arr[i]-arr[j];
           arr[i]=arr[i]-arr[j];

       }

       if(arr[i]==0&&arr[j]==1)
       {
           i++;
           j--;
       }

       if(arr[i]==0&&arr[j]==0)
       {
           i++;

       }

       if(arr[i]==1&&arr[j]==1)
       {

           j--;
       }




   }
}
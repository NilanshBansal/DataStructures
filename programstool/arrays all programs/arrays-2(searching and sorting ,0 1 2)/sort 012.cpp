// arr - input array
// n - size of array
void sort012(int arr[], int n)  {  
    // Write your code here
int i=0,j=n-1,k=0,temp;
 while(k<=j)
   {
       if(arr[k]==1)
         k++;
        else if(arr[k]==0)
          {
              temp=arr[i];
              arr[i]=arr[k];
              arr[k]=temp;
              i++;
              k++;
          }
         else if(arr[k]==2)
          {
             temp=arr[j];
              arr[j]=arr[k];
              arr[k]=temp;
              j--;
              
          }
   }

}
// arr - input array
// n - size of array
// val - element to be searched
int BinarySearch(int arr[], int n, int val){	
 int first=0,last=n-1,mid;
 while(first<=last)
 {
     mid=(first+last)/2;
     if(arr[mid]==val)
     return mid;
     else if(arr[mid]>val)
      last=mid-1;
     else if(arr[mid]<val)
        first=mid+1;
 }
 return -1;

}
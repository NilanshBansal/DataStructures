void Reverse(int arr[],int size) {
	// Write your code here
int i=0,j=size-1,temp;
while(i<=j)
{
    temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    i++;
    j--;
}
}


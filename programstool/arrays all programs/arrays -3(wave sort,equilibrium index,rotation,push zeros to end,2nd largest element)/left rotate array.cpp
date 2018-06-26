/*
Rotate array
Write a function rotate(ar[], d, n) that rotates arr[] of size n by d elements (towards left).

Sample Test :

Input :

7 (n)

1 2 3 4 5 6 7

2 (d)

Output :

3 4 5 6 7 1 2

*/

// arr - input array
// size - size of array
// d - array to be rotated by d elements
void Rotate(int arr[], int d, int size) {
	// Write your code here
    int temp,i;
while(d>0)
  { 
     temp=arr[0]; 
     for(i=0;i<size-1;i++)
      {
          arr[i]=arr[i+1];
          
      }
      arr[size-1]=temp;
      
      
      d--;
  }
  
  
}	
/*Push Zeros to end
ORDER OF INPUT SHOULD BE SAME
Given an array of random numbers, push all the zeros to end of the array.

Sample Test :

Input :

11

1 9 8 4 0 0 2 7 0 6 0

Output :

1 9 8 4 2 7 6 0 0 0 0

*/



// arr - input array
// n - size of array
void PushZeroesEnd(int arr[], int n){
	// Write your code here
int i,j,count=0;
for(i=0;i<n;i++)
 {
     if(arr[i]!=0)
     {
         arr[count++]=arr[i];
     }
     
   
    }
    
 while(count<n)
    {arr[count]=0;
        count++;}
}
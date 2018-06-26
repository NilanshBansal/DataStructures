Staircase
Send Feedback
A child is running up a staircase with n steps and can hop either 1 step, 2 steps or 3 steps at a time. Implement a method to count how many possible ways the child can run up to the stairs. You need to return all possible number of ways.
Time complexity of your code should be O(n).
Input format :
Integer n (No. of steps)
Constraints :
n <= 70
Sample Input 1:
4
Sample Output 1:
7



long staircase(int n){
    /*  Don't write main().
     *  Don't read input, it is passed as function argument.
     *  Return output and don't print it.
     *  Taking input and printing output is handled automatically.
     */
  long *ans=new long[n+2]
    ans[0]=1;
  ans[1]=1;
  ans[2]=2;
  ans[3]=4;
  int i;
  for(i=4;i<n+1;i++)
  {
    ans[i]=ans[i-1]+ans[i-2]+ans[i-3];
  }
    return ans[n];
    
}

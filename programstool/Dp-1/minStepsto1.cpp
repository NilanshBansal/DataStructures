Min Steps to one
Send Feedback
Given a positive integer n, find the minimum number of steps s, that takes n to 1. You can perform any one of the following 3 steps.
1.) Subtract 1 from it. (n= n - ­1) ,
2.) If its divisible by 2, divide by 2.( if n%2==0, then n= n/2 ) ,
3.) If its divisible by 3, divide by 3. (if n%3 == 0, then n = n / 3 ).  
Just write brute-force recursive solution for this.
Input format :
Line 1 : A single integer i.e. n
Output format :
Line 1 : Single integer i.e number of steps
Constraints :
1 <= n <= 500
Sample Input 1 :
4
Sample Output 1 :
2 
Sample Output 1 Explanation :
For n = 4
Step 1 : n = 4/2 = 2
Step 2 : n = 2/2 = 1
Sample Input 2 :
7
Sample Output 2 :
3
Sample Output 2 Explanation :
For n = 7
Step 1 : n = 7 ­ - 1 = 6
Step 2 : n = 6 / 3 = 2
Step 3 : n = 2 / 2 = 1



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



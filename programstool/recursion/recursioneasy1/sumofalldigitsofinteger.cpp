/*
Sum of digits (recursive)
Write a recursive function that returns the sum of the digits of an integer.

Sample Test :

Input :

12345

Output :

15

*/


int sumOfDigits(int n) {
    // Write your code here
    int m,d,k;
    
    if(n==0)
      {
        return 0;  
      }
    
    m=n/10;
    d=sumOfDigits(m);
  
    k=n%10;
    return d+k;




}


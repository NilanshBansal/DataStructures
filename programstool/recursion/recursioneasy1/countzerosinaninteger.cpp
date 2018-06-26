/*

Count Zeros
Count number of zeros in an integer using recursion.

Sample test :

Input -

10204

Output -

2

*/


int countZeros(int n) {
    // Write your code here
   int m,k,d;
    if(n==0)
      return 0;
    
    m=n/10;
    k=n%10;
    d=countZeros(m);
    if(k==0)
      return d+1;
    else
      return d;
   
}


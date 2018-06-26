/*
Multiplication (Recursive)
Multiply two numbers m & n using only addition & subtraction.

Sample test :

Input -

3 5

Output -

15
*/

int multiplyNumbers(int m, int n) {
    // Write your code here
int d;
if((m==0)||(n==0))
return 0;
if(n==1)
return m;
d=multiplyNumbers(m,n-1);
return d+m;
}


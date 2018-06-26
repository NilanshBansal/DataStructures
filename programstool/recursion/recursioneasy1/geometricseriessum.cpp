/*
Geometric Sum
Given k, find the geometric sum i.e. 1 + 1/2 + 1/4 + 1/8 + ... + 1/(2^k) using recursion.

Sample Test :

Input :

3

Output :

1.875

*/

double geometricSumHelper(int k,int a)
{
 if(k==0)
 return 1;
 a=a*2;
 return  (1.0/a) + (geometricSumHelper(k-1,a));
}

double geometricSum(int k) {
    // Write your code here
    double d;
    d=geometricSumHelper(k,1);
    return d;

}


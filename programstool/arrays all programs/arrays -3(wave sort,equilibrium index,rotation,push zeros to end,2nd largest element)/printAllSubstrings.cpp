/*
Given a String S of length n, print all its substrings.
Substring of a String S is a part of S (of any length from 1 to n), which contains all consecutive characters from S.

Sample Input 1 :
xyz
Sample Output 1 :
x
xy
xyz
y
yz
z



*/


void printSubstrings(char str[]){
  /* Don't write main().
   *  Don't read input, it is passed as function argument.
   * Print output as specified in the question.
   */
int i,k,j,n;
  for(i=0;str[i]!='\0';i++)
  {
    n++;
  }
  for(j=0;j<n;j++)
  {
    for(k=j;k<n;k++)
    {
      for(int l=j;l<=k;l++)
      {
        cout<<str[l];
      }
      cout<<endl;
    }
  }

}

Print Array intersection
Send Feedback
Given two random integer arrays, print their intersection. That is, print all the elements that are present in both the given arrays.
Input arrays can contain duplicate elements.
Note : Order of elements are not important
Input format :
Line 1 : Integer N, Array 1 Size
Line 2 : Array 1 elements (separated by space)
Line 3 : Integer M, Array 2 Size
Line 4 : Array 2 elements (separated by space)
Output format :
Print intersection elements in different lines
Constraints :
1 <= M, N <= 10^6
Sample Input 1 :
6
2 6 8 5 4 3
4
2 3 4 7 
Sample Output 1 :
2 
4 
3
Sample Input 2 :
4
2 6 1 2
5
1 2 3 4 2
Sample Output 2 :
2 
2
1


// input1 - first array
// input2 - second array
// size1 - size of first array
// size2 - size of second array
#include<unordered_map>
#include<algorithm>
#include<cmath>
void intersection(int input1[], int input2[], int size1, int size2) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Print the output and don't return it.
     * Taking input is handled automatically.
     */
unordered_map<int,int> check;
  unordered_map<int,int> check2;
  for(int i=0;i<size1;i++)
  {
    if(check.count(input1[i])==0)
    {
      pair<int,int> p(input1[i],1);
      check.insert(p);
    }
    else
    {
      check[input1[i]]++;
    }
  }
  for(int i=0;i<size2;i++)
  {
   
    if(check2.count(input2[i])==0)
    {
      pair<int,int> p(input2[i],1);
      check2.insert(p);
    }
    else
    {
      check2[input2[i]]++;
    } 
  }
  unordered_map<int,int>::iterator it=check.begin();
  while(it!=check.end())
  {
   if(check2.count(it->first)>0)
   {
     for(int j=0;j<min(it->second,check2[it->first]);j++)
     {
     cout<<it->first<<endl;
     }
   }
    it++;
  }
}

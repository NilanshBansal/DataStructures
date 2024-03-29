K smallest elements
Send Feedback
You are given with an integer k and an array of integers that contain numbers in random order. Write a program to find k smallest numbers from given array. You need to save them in an array and return it.
Time complexity should be O(nlogk) and space complexity should be not more than O(k).
Order of elements in the output is not important.
Input Format :
Line 1 : Size of array (n)
Line 2 : Array elements (separated by space)
Line 3 : Integer k
Output Format :
k smallest elements
Sample Input 1 :
13
2 12 9 16 10 5 3 20 25 11 1 8 6 
4
Sample Output 1 :
5
3
2
1



#include<queue>
vector<int> kSmallest(int *arr, int n, int k) {
	// Write your code here
vector<int> help;
  priority_queue<int> pq;
  int i;
  for(i=0;i<k;i++)
  {
    pq.push(arr[i]);
  }
  while(i!=n)
  {
    if(arr[i]<pq.top())
    {
      pq.pop();
      pq.push(arr[i]);
      i=i+1;
    }
    else
    {
      i=i+1;
    }
  }
  int count=0;
  for(i=0;i<k;i++)
  {
    int temp=pq.top();
    pq.pop();
   help.push_back(temp);
  }
  return help;
}
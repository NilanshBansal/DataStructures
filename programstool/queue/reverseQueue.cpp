Reverse Queue
Send Feedback
Given a queue of integers, reverse it without help of any explicit stack or queue. You need to change in the given queue itself.
Note : No need to return or print the queue.
Input format :
Line 1 : Size of Queue
Line 2 : Queue elements (separated by space)
Output format :
Queue elements
Sample Input :
4 
1 2 3 4     (1 is at front)
Sample Output :
4 3 2 1    (4 is at front)

#include <queue>

void reverseQueue(queue<int> &q) {
	// Write your code here
  int help[10000];
  int count=0;
  int help1;
while(q.empty()!=true)
{
  help1=q.front();
  q.pop();
  help[count]=help1;
  count++;
}
  for(int i=count-1;i>=0;i--)
  {
    q.push(help[i]);
  }
}
/*
   A child is running up a staircase with n steps, and can hop either 1 step, 2 steps or 3 steps at a time. Implement a method to count how many possible ways the child can run up to the stairs. You need to return all possible number of ways.

Input format : n (No. of steps) (n <= 30)

Sample Input 1:

4
Sample Output 1:

7

*/
int waysUpStair(int n) {
	// Write your code here

  
            if (n == 0)
            {
                return 1;
            }
            if (n == 1)
            {
                return 1;
            }
            if (n == 2)
            {
                return 2;
            }

            return waysUpStair(n - 1) + waysUpStair(n - 2) + waysUpStair(n - 3);
        }



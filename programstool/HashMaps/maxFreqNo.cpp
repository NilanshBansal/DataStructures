Maximum Frequency Number
Send Feedback
You are given with an array of integers that contain numbers in random order. Write a program to find and return the number which occurs maximum times in the given input.
If more than one element occurs same number of times in the input, return the element which is present in the input first.
Best solution takes O(n) time.
Input Format :
Line 1 : An Integer N i.e. size of array
Line 2 : N integers which are elements of the array, separated by spaces
Output Format :
Most frequent element
Constraints :
1 <= N <= 10^5
Sample Input 1 :
13
2 12 2 11 12 2 1 2 2 11 12 2 6 
Sample Output 1 :
2
Sample Input 2 :
3
1 4 5
Sample Output 2 :
1


 	#include<unordered_map>
	int highestFrequency(int *input, int n){	 
		
	/* Don't write main().
     	* the input array is already passed as function argument.
     	* Taking input and printing output is handled automatically.
     	*/
     	
     	unordered_map<int,int> check;
      int i;
      int key=input[0];
      int ans=1;
      for(i=0;i<n;i++)
      {
        if(check.count(input[i])==0)
        {
          pair<int,int> p(input[i],1);
          check.insert(p);
        }
        else
        {
          check[input[i]]++;
        }
      }
      unordered_map<int,int>::iterator it=check.begin();
      while(it!=check.end())
      {
        if(it->second>ans)
        {
          key=it->first;
          ans=it->second;
        }
        it++;
      }
      return key;
     	
 	}


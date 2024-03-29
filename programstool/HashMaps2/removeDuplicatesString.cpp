Extract Unique characters
Send Feedback
Given a string, you need to remove all the duplicates. That means, the output string should contain each character only once. The respective order of characters should remain same.
Input format :
String S
Output format :
Output String
Constraints :
1 <= Length of S <= 50000
Sample Input 1 :
ababacd
Sample Output 1 :
abcd
Sample Input 2 :
abcde
Sample Output 2 :
abcde


# define NO_OF_CHARS 256
# define bool int
char* uniqueChar(char *str){
    // Write your code here
bool bin_hash[NO_OF_CHARS] = {0};
  int ip_ind = 0, res_ind = 0;
  char temp;    
 
  /* In place removal of duplicate characters*/
  while (*(str + ip_ind))
  {
    temp = *(str + ip_ind);
    if (bin_hash[temp] == 0)
    {
        bin_hash[temp] = 1;
        *(str + res_ind) = *(str + ip_ind);
        res_ind++;
    }
    ip_ind++;
  }      
 
  /* After above step string is stringiittg.
     Removing extra iittg after string*/
  *(str+res_ind) = '\0';   
 
  return str;
}
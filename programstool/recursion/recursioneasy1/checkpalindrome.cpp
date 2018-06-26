/*


Check Palindrome (recursive)
Check if a given String is palindrome or not (using recursion).

Sample test 1 :

Input :

racecar

Output :

true

Sample test 2 :

Input :

ninja

Output :

false


*/

bool checkPalindrome(char input[]) {
    // Write your code here
 int len=0,i;
    bool d;
    char temp[100];
    
    if(input[0]=='\0')
      return 1;
    
    for(i=0;input[i]!='\0';i++)
      {len++;
      }
    
    for(i=1;i<len-1;i++)
      {temp[i-1]=input[i];
       
      }
      
    temp[i-1]='\0';
    
    d=checkPalindrome(temp);
    if(d==0)
      return 0;
    else 
       {if(input[0]==input[len-1])
          return 1;
        else
          return 0;
       }
}


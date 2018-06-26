/*

Replace pi (recursive)
Given a string, compute recursively (no loops) a new string where all appearances of "pi" have been replaced by "3.14".

Sample Test 1 :

Input :

xpix

Output :

x3.14x

Sample Test 2 :

Input :

pipi

Output :

3.143.14

Sample Test 3 :

Input :

pip

Output :

3.14p

*/

void replacePihelper(char input[],char temp[],int i,int j)
       {if(input[i]=='\0')
       {
         temp[j]='\0';
         i++;
         return;
       }
    else if(input[i]=='p')
    {
       if(input[i+1]=='\0')
       {
           temp[j]=input[i];
           j++;i++;
           temp[j]='\0';
           return;

       }
       else if(input[i+1]=='i')
       {
           temp[j]='3';
           j++;
           temp[j]='.';
           j++;
           temp[j]='1';
           j++;
           temp[j]='4';
           j++;
           i+=2;
       }
       else
       {
         temp[j]=input[i];
           j++;i++;
       }
    }
    else
    {
        temp[j]=input[i];
        j++;i++;

    }
         
    replacePihelper(input,temp, i,j);
    return;
       }
   

void replacePi(char input[]) {
    // Write your code here

  char temp[100];  
    
  replacePihelper(input,temp,0,0);
  int i=0;
  while(temp[i]!='\0')
   {  
       input[i]=temp[i];
       i++;
   }




}




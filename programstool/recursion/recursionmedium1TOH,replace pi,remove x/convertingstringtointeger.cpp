/*
String to Integer
Write a recursive function to convert a String into the number it represents.

Sample Test :

Input :

"1231" (string type)

Output :

1231 (int type)

*/

int stoi(char input[], int end)
{
    if(end==0)
    return input[0] - '0';

	int pos = stoi(input, end-1);
	return pos*10 + (input[end] - '0');

}




int stringToNumber(char input[]) {
    // Write your code here
  int i,d,len=0;
  
  for(i=0;input[i]!='\0';i++)
   {
       len++;
   }

  d=stoi(input,len-1);
  return d;
}


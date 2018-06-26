/*
   Assume that the value of a = 1, b = 2, c = 3, ... , z = 26. You are given a numeric string S. Write a program to print the list of all possible codes that can be generated from the given string.

Note : The order of codes are not important. Just print them in different lines.

Input format : A numeric string

Sample Input:

1123
Sample Output:

aabc
kbc
alc
aaw
kw



*/

/***
You need to save all the strings in the given 2D output array. And return the number of strings(i.e. number of rows filled in output) from the given function.

Don’t print the strings, just save them in output.
***/


#include <iostream>
using namespace std;
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





int codes(int input, char output[][100]) {
	if (input == 0) {
		output[0][0] = '\0';
		return 1;
	}

	int lastDigitNumber = input % 10;
	char smallOutput1[100][100];
	int size1 = codes(input/10, smallOutput1);
	int outputSize = size1;
	for (int i = 0; i < size1; i++) {
		int j = 0;
		for (; smallOutput1[i][j] != '\0'; j++) {
			output[i][j] = smallOutput1[i][j];
		}
		output[i][j] = lastDigitNumber + 'a' - 1;
		j++;
		output[i][j] = '\0';
	}

	int lastTwoDigit = input % 100;
	if (lastTwoDigit > 9 && lastTwoDigit <= 26) {
		char smallOutput2[100][100];
		int size2 = codes(input/100, smallOutput2);
		for (int i = 0; i < size2; i++) {
			int j = 0;
			for (; smallOutput2[i][j] != '\0'; j++) {
				output[size1 + i][j] = smallOutput2[i][j];
			}
			output[size1 + i][j] = lastTwoDigit + 'a' - 1;
			j++;
			output[size1 + i][j] = '\0';
		}
		outputSize += size2;
	}
	return outputSize;
}







int getAllCodes(char input[], char output[][100]) {
    // Write your code here
    int num=stringToNumber(input);
 
 int k=codes(num,output);
 
 
 return k;

}






void printAllPossibleCodes(char input[]) {
    // Write your code here
    char output[100][100];
   int m=getAllCodes(input,output);
   for(int i=0;i<m;i++)
    cout<<output[i]<<endl;
}
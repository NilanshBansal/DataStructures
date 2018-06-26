#include<iostream>
using namespace std;


// return size of output array
int DecimalToBinary(int number, int output[]) {
	// Write your code here
 int  i=0,j,temp,count=0;
   while(number>0)
   {output[i++]=number%2;
   number/=2;
   count++;

   }
  i=0;
  j=count-1;
while(i<=j)
{
    temp=output[i];
    output[i]=output[j];
    output[j]=temp;
    i++;
    j--;
}



return count;



}


int main()
{
    int output[1000],decinum,i;

    cout<<"\nenter decimal number : ";
    cin>>decinum;
    int count=DecimalToBinary(decinum,output);
    cout<<"\nconverted binary number is: \n";
    for(i=0;i<count;i++)
      cout<<output[i]<<" ";

    return 0;
}

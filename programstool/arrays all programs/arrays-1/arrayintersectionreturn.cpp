// input1 - first array
// input - second array
// size1 - size of first array
// size2 - size of second array
// output - array in which you need to save the intersection elements
// input1 - first array
// input - second array
// size1 - size of first array
// size2 - size of second array
#include<iostream>
#include<algorithm>
using namespace std;
// input - input array
// size - length of input array
// element - value to be searched

//insert different code for binary search it is giving tle for some cases

int BinarySearchHelper(int input[],int si,int ei,int element)
 {
    int pos;
    if(si==ei)
     {
         if(input[si]==element)
           return si;
         else
           return -1;

     }
     if(input[(si+ei)/2]==element)
     return (si+ei)/2;
     else if(input[(si+ei)/2]<element)
       si=((si+ei)/2)+1;
        else
         ei=((si+ei)/2)-1;
     pos=BinarySearchHelper(input,si,ei,element);
     return pos;

 }
int binarySearch(int input[], int size, int element) {
    // Write your code here
    int pos;
    pos=BinarySearchHelper(input,0,size-1,element);
    return pos;
}


int intersection (int input1[], int input2[], int size1,int size2,int output[]) {
	// Write your code here

   int i,k,j=0;
  if(size1<size2)
  {
      sort(input1,input1+size1);
      for(i=0;i<size2;i++)
           {

             k=binarySearch(input1,size1,input2[i]);
             if(k!=-1)
             output[j++]=input2[i];

           }


  }

  else
    {
        sort(input2,input2+size2);

         for(i=0;i<size1;i++)
           {

             k=binarySearch(input2,size2,input1[i]);
             if(k!=-1)
               output[j++]=input1[i];


           }

    }

    return j;
}

//code 2 ....

// input1 - first array
// input - second array
// size1 - size of first array
// size2 - size of second array

// output - array in which you need to save the intersection elements and return the size of this array
/* #include<algorithm>
#include<iostream>
int intersection (int input1[], int input2[], int size1, int size2, int output[]) {
	// Write your code here
 sort(input1, input1 + size1);
	sort(input2, input2 + size2);
	
	int i=0, j=0, k=0;
	while(i<size1 && j<size2)
	{ if(input1[i]==input2[j])
	  { output[k++] = input1[i];
	    i++;
	    j++;
	  }
	  else if(input1[i]<input2[j])
	  i++;
	  else
	  j++;
	}
	
return k;
}
 */






int main()
{
    int input1[1000],output[1000],input2[1000],size1,size2,i;
    cout<<"\nsize of array 1: ";
    cin>>size1;
    cout<<"\nenter array 1: ";
    for(i=0;i<size1;i++)
    {
      cin>>input1[i];
    }
    cout<<"\nsize of array 2: ";
    cin>>size2;
    cout<<"\nenter array 2: ";
    for(i=0;i<size2;i++)
    {
      cin>>input2[i];
    }
    cout<<"\n\n";
    int t=intersection(input1, input2, size1,size2,output);
for(i=0;i<t;i++)
    cout<<output[i]<<" ";

return 0;
}

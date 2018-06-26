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

//insert different code for binary search ...it is giving tle for some cases
//code no1

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

void intersection(int input1[], int input2[], int size1,int size2) {
	// Write your code here
 int i,k;
  if(size1<size2)
  {
      sort(input1,input1+size1);
      for(i=0;i<size2;i++)
           {

             k=binarySearch(input1,size1,input2[i]);
             if(k!=-1)
              cout<<input2[i]<<" ";

           }


  }

  else
    {
        sort(input2,input2+size2);

         for(i=0;i<size1;i++)
           {

             k=binarySearch(input2,size2,input1[i]);
             if(k!=-1)
              cout<<input1[i]<<" ";

           }





    }
}

//code no 2
// input1 - first array
// input - second array
// size1 - size of first array
// size2 - size of second array


void intersection(int input1[], int input2[], int size1,int size2) {
	sort(input1, input1 + size1);
	sort(input2, input2 + size2);
	
	int i=0, j=0, k=0;
	while(i<size1 && j<size2)
	{ if(input1[i]==input2[j])
	  { cout<<input1[i]<<endl;
	    i++;
	    j++;
	  }
	  else if(input1[i]<input2[j])
	  i++;
	  else
	  j++;
	}	
}

int main()
{
    int input1[1000],input2[1000],size1,size2,i;
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
    intersection(input1, input2, size1,size2);


return 0;
}

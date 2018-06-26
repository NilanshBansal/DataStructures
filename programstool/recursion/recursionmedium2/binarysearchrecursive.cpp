// input - input array
// size - length of input array
// element - value to be searched
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
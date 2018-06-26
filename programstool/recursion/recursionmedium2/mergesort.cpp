void merge( int a[] , int  count1 , int b[] , int count2 , int input[]  )
 {
     int i=0 , j=0 , k=0;


        while(i<count1&&j<count2)
 {

  if(a[i]>=b[j])
    {
        input[k]=b[j];
    j++;
    k++;
    }
  else if(a[i]<b[j])
   {

    input[k]=a[i];
    i++;
    k++;
   }

 }

while(i<count1)
{
    input[k++]=a[i++];
}
while(j<count2)
{
    input[k++]=b[j++];
}






}



void mergeSort(int input[], int size){
    // Write your code here
if(size==0||size==1)
return ;

     int i,j,k,a[50000],b[50000],count1=0,count2=0;

         for(i=0;i<size/2;i++)
           {
               a[i]=input[i];
             count1++;
           }
         k=0;
        for(j=(size/2);j<size;j++)
        {
            b[k++]=input[j];
            count2++;
        }

       mergeSort(a,count1);
       mergeSort(b,count2);

       merge(a,count1,b,count2,input);




}

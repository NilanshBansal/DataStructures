#include<iostream>
using namespace std;

int partition(int arr[],int low,int high){
    int i=low-1,j;
    int pivot=arr[high];
    for(j=low;j<=high-1;j++)
    {
        if(arr[j]<=pivot)
        {
            i++;
            swap(arr[i],arr[j]);
        }

    }
    swap(arr[i+1],arr[high]);
    return i+1;
}

void quicksort(int arr[],int low,int high){
    
    if(low<high){
        int pi=partition(arr,low,high); //pi is partition index
        quicksort(arr,low,pi-1);
        quicksort(arr,pi+1,high);
    }
}


int main()
{
    
    int arr[20],n,i;
    cout<<"enter size: ";
    cin>>n;
    cout<<"\nenter elements: ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    quicksort(arr,0,n-1);
    cout<<"\nDisplaying array: ";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}

/*

int partition(int arr[],int low,int high){
    
    int pivot=arr[high],i,j;
    i=low-1;
    for(i=low;i<high;i++){
        if()
    }

}
void quicksort(int arr[],int low,int high){
    if(low<high){
        int pi=partition(arr,low,high);
        quicksort(arr,low,pi-1);
        quicksort(arr,pi+1,high);
    }
}

#include<iostream>
using namespace std;
int main(){
    int arr[30],n,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    quicksort(arr,0,n-1);

    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }


    return 0;
}
*/

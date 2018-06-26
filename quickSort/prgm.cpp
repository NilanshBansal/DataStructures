#include<iostream>
using namespace std;
int partitionalgo(int arr[],int l,int r){
    int temp,residue;
    int pivot=arr[r];
    int i=l-1;
    for(int j=l;j<=r-1;j++){
        if(arr[j]<=pivot){
            i++;
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    residue=arr[i+1];
    arr[i+1]=arr[r];
    arr[r]=residue;
    return i+1;    
    
}

void quicksort(int arr[],int l,int r){
    int pindex;
    if(l<r){
        pindex=partitionalgo(arr,l,r);
        quicksort(arr,l,pindex-1);
        quicksort(arr,pindex+1,r);
    }
}

int main(){

    int n,arr[100];
    cin >> n;
    //input array values
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"sorting"<<endl;
    quicksort(arr,0,n-1);

    
    //printing array 
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
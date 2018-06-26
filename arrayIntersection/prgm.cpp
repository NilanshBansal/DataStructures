#include<iostream>
using namespace std;
int partition(int arr[],int l,int r){
    int i=l-1,pivot=arr[r];
    for(int j=l;j<r;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[r]);
    return i+1;
}

void quickSort(int arr[],int l,int r){
    if(l<r){
        int pindex=partition(arr,l,r);
        quickSort(arr,l,pindex-1);
        quickSort(arr,pindex+1,r);
    }
}
int main(){
    int n1,n2;
    
    //input array1
    cout<<"enter size of array1 :" ;
    cin>>n1;
    int * arr1 = new int[n1];
    cout<<"enter elements of array 1: ";
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }

    //input array2 
    cout<<"enter size of array2 :" ;
    cin>>n2;
    int * arr2 = new int[n2];
    cout<<"enter elements of array 2: ";
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }

    quickSort(arr1,0,n1-1);
    quickSort(arr2,0,n2-1);

    int i=0,j=0;
    while(i<n1 && j<n2){
        if(arr1[i]==arr2[j]){
            cout<<arr1[i];
            i++;
            j++;
        }
        else if(arr1[i]<arr2[j]){
            i++;
        }
        else{
            j++;
        }
    }
    return 0;
}
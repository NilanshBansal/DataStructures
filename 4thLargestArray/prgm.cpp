#include<iostream>
using namespace std;
int partition(int arr[],int l,int r){
    int i=l-1,temp;
    int pivot=arr[r];
    for(int j=l;j<r;j++){
        if(arr[j]<=pivot){
            i++;
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    temp=arr[i+1];
    arr[i+1]=arr[r];
    arr[r]=temp;
    return i+1;
}

int  quickSortSelect(int arr[],int l,int r,int k){
    if(k>0 && k<= r-l+1){
        int pindex=partition(arr,l,r);
        if(pindex==k-1){
            return arr[pindex];
        }
        if(k-1<pindex){
            return quickSortSelect(arr,l,pindex-1,k);
        }
        return quickSortSelect(arr,pindex+1,r,k-pindex+l-1);
    }
     
}


int main(){

    int n,arr[100],k;
    cout<<"enter size: ";
    cin>>n;
    cout<<"enter k (largest no position)";
    cin>>k;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<quickSortSelect(arr,0,n-1,k);






    return 0;
}
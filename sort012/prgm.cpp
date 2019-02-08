#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int * arr = new int[n];

    for(int i =0;i<n;i++){
        cin>>arr[i];
    }

    int i=0,j=0,k=n-1;
    while(j<=k){
        if(arr[j]==1){
            j++;
        }
        else if(arr[j]==0){
            swap(arr[i],arr[j]);
            i++;
            j++;
        }
        else{
            swap(arr[j],arr[k]);
            k--;
        }
    }

    cout<<"\nPrinting Array: "<<endl;
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
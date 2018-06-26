#include<iostream>
#include<climits>
using namespace std;
void countingSort(int arr[],int output[],int n,int max){
    int * count = new int [max+1]; 
    //count array
    for(int i=1;i<=n;i++){
        count[arr[i]]++;
    }
    //modyifying count array
    for(int i=1;i<=max;i++){
        count[i]+=count[i-1];
    }
    for(int i=1;i<=n;i++){
        output[count[arr[i]]]=arr[i];
        count[arr[i]]--;
    }
    cout<<"\nprinting sorted array: \n";
    for(int i=1;i<=n;i++){
        cout<<output[i]<<" ";
    }
    cout<<endl;

}
int main(){
    int n;
    cin>>n;
    int * arr = new int[n+1];
    int * output= new int [n+1];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    //finding max element from the array
    int max=INT_MIN;
    for(int i=1;i<=n;i++){
        if(arr[i]>max){max=arr[i];}
    }

    countingSort(arr,output,n,max);

    // for(int i=0;i<n;i++){
    //     cout<<arr[i];
    // }

    return 0;
}
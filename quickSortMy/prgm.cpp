#include<iostream>
using namespace std;

int partition(int *arr, int si, int ei){
    
    int p_index = si;
    int small_count=0;

    for(int i = si + 1; i<=ei;i++){
        if(arr[i]<arr[p_index]){
            small_count++;
        }
    }
    swap(arr[si+small_count],arr[p_index]);
    p_index = si+small_count;

    int left = si,right = ei;
    while(left<right){
        if(arr[left]<arr[p_index]){
            left++;
        }
        if(arr[right]>arr[p_index]){
            right--;
        }
        if(arr[left]>arr[p_index] && arr[right]<arr[p_index]){
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
    }
    return p_index;

}

void quickSort(int *arr, int si, int ei){
    if(si>=ei){
        return;
    }
    int p_index = partition(arr,si,ei);
    quickSort(arr,si,p_index);
    quickSort(arr,p_index + 1 , ei);

}

int main(){
    int size;
    cin>>size;
    int *arr = new int[size];
    for(int i = 0 ; i<size;i++){
        cin>>arr[i];
    }
    
    quickSort(arr,0,size-1);

    for(int i = 0 ; i<size;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
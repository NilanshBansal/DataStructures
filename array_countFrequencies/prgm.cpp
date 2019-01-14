#include<iostream>
using namespace std;


void countFrequencies(int *arr, int size){
    //Bringing all elements in size 0 to size-1
    for(int i = 0;i<size;i++){
        arr[i]--;
    }

    //Adding Size to each index of element
    for(int i=0;i<size;i++){
        arr[arr[i]%size]+= size;
    }

    for(int i=0;i<size;i++){
        cout<<"Element: "<<i+1<<" Occurrence: "<<arr[i]/size;
        arr[i] = (arr[i]%size) + 1; //Bringing Back Original Array
        cout<<endl;
    }

    

}

int main(){
    int size;
    cin>>size;
    int *arr = new int[size];

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    countFrequencies(arr,size);

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
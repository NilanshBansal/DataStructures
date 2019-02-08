#include<iostream>
#include<unordered_map>
using namespace std;

int no_of_dublicates(int *arr, int size){
    unordered_map<int,int> umap;
    int count = 0;
    for(int i=0;i<size;i++){
        if(umap[arr[i]]==1){
            count++;
        }
        umap[arr[i]]++;
    }
    return count;
}

int main(){
    int size;
    cin>>size;

    int *arr = new int[size];

    for (int i=0;i<size;i++){
        cin>>arr[i];
    }
    

    cout<<no_of_dublicates(arr,size);

    return 0;
}
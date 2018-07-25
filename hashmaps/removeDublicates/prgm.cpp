#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int> removeDublicates(int *arr , int size){
    unordered_map<int,bool> seen;
    vector<int> output;
    for(int i =0;i<size;i++){
        if(seen.count(arr[i]) > 0){
            continue;
        }
        seen[arr[i]] = true;
        output.push_back(arr[i]);
    }
    return output;
}

int main(){
    int n;
    cin>>n;
    int *arr = new int [n];

    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    vector<int> output = removeDublicates(arr,n);
    cout<<"\noutput"<<endl;
    for(int i = 0 ; i< output.size();i++){
        cout<<output[i]<<" ";
    }
    cout<<endl;
    return 0; 
}
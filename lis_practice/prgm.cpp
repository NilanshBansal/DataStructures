#include<iostream>
#include<vector>
using namespace std;

void lis(vector<int>arr, int n){
    vector<vector<int> > lis(n);

    lis[0].push_back(arr[0]);
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(arr[j]<arr[i] && lis[j].size()+1 > lis[i].size()){
                lis[i] = lis[j];
            }
        }
        lis[i].push_back(arr[i]);
    }
    int max = 0;
    cout<<"\nLIS\n";
    for(int k=0;k<n;k++){
        if(lis[k].size()>max){
            max = lis[k].size();
        }
        for(int m=0;m<lis[k].size();m++){
            cout<<lis[k][m]<<" ";
        }
        cout<<endl;
    }
    cout<<"\nMaxlength is: "<<max<<endl;
}   



int main(){

    int n;
    cin>>n;

    vector<int> arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    lis(arr,n);


    return 0;
}
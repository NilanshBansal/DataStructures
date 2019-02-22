#include<iostream>
using namespace std;

int maxSubarraySum(int *arr,int n){
    int ans = 0, sum=0,flag=0,maxel=INT_MIN;

    for(int i=0;i<n;i++){
        if(arr[i]>maxel){
            maxel=arr[i];
        }
        if(arr[i]>0){
            flag=1;
            break;
        }
    }
    if(flag==0){
        return maxel;
    }

    for(int i=0;i<n;i++){
        if(sum+arr[i]>0){
            sum+=arr[i];
        }
        else{
            sum=0;
        }
        ans = max(ans,sum);
    }
    return ans;
}

int main(){

    int n;
    cin>>n;
    int *arr =new int[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<maxSubarraySum(arr,n)<<endl;



    return 0;
}
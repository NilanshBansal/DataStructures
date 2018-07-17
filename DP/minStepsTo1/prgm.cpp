#include<iostream>
#include<climits>
using namespace std;

int minStepsTo1(int n){
    if(n==1){
        return 0;
    }
    
    int out1=INT_MAX,out2=INT_MAX,out3=INT_MAX;
    if(n%2 == 0){
        out1 = minStepsTo1(n/2);
    }
    
    if(n%3 == 0){
        out2 = minStepsTo1(n/3);
    }
    
    out3 = minStepsTo1(n-1);

    return 1 + min(out1,min(out2,out3));
}

int minStepsTo1_BetterHelper(int n,int* arr){
    if(n==1){
        arr[n] = 0;
        return 0;
    }

    int out1=INT_MAX,out2=INT_MAX,out3=INT_MAX;
    
    
    if(arr[n-1] == -1){
        out3 = minStepsTo1(n-1);
        arr[n-1] = out3;
    }
    else{
        out3 = arr[n-1];
    }

    if(n%2 == 0){
        if(arr[n/2] == -1 ){
            out1 = minStepsTo1(n/2);
            arr[n/2] = out1;
        }
        else{
            out1 = arr[n/2];
        }
        
    }
    
    if(n%3 == 0){
        if(arr[n/3] == -1 ){
            out2 = minStepsTo1(n/3);
            arr[n/3] = out2;
        }
        else{
            out2 = arr[n/3];
        }
    }
    return 1 + min(out1,min(out2,out3));
}

int minStepsTo1_Better(int n){
    int *arr = new int[n+1];
    for(int i = 0;i<=n;i++){
        arr[i]=-1;
    }
    return minStepsTo1_BetterHelper(n,arr);
}
/* 
int minStepsTo1_DP(int n){
    
}
 */

int main(){
    int n;
    cin>>n;
    cout<<"\nno of steps: "<<minStepsTo1(n)<<endl;
    return 0;
}
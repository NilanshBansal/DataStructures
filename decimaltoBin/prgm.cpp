#include<iostream>
using namespace std;
int decToBin(int n,int output[]){
    int i=0;
    while(n>0){
        output[i++]=n%2;
        n/=2;
    }
    return i;
}
int main(){

int n,output[100];
cout<<"\nEnter Decimal no: ";
cin>>n;
int len=decToBin(n,output);
//reversing output array
int start=0,end=len-1;
while(start<end){
    //swapping
    output[start]=output[start]+output[end];
    output[end]=output[start]-output[end];
    output[start]=output[start]-output[end];
    start++;
    end--;
}
cout<<"\nBinary no: ";
for(int i=0;i<len;i++){
    cout<<output[i]<<" ";
}
cout<<endl;

    return 0;
}
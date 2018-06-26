#include<iostream>
using namespace std;
int main(){

    int n,num;
    cin>>n;
    for(int i=0;i<n;i++){
        num=i;
        for(int k=i+1;k<n;k++){
            cout<<" ";
        }
        
        for(int m=0;m<=i;m++){
            cout<<num;
            num--;
        }
        
        
        
        
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }


    return 0;
}
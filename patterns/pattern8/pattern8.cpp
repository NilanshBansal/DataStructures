#include<iostream>
using namespace std;
int main(){

    int n,num;
    cin>>n;
    for(int i=1;i<=n/2 + 1;i++){
        num=1;
        for(int k=i;k<=n/2;k++){
            cout<<" ";
        }

        for(int j=1;j<=2*i-1;j++){
            cout<<num;
            num++;
        }

        for(int k=i;k<=n/2;k++){
            cout<<" ";
        }

        cout<<endl;
    }
    

    for(int i=n/2;i>=1;i--){
        num=1;
        for(int k=n/2;k>=i;k--){
            cout<<" ";
        }


        for(int j=1;j<=2*i-1;j++){
            cout<<num;
            num++;
        }



        for(int k=n/2;k>=i;k--){
            cout<<" ";
        }
        cout<<endl;
    }


    return 0;
}
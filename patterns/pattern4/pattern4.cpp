#include<iostream>
using namespace std;
int main(){

    int n;
    char alphabet='A';
    cin>>n;
    for(int i=n-1;i>=0;i--){
        alphabet='A' + i;
        for(int j=n-1;j>=i;j--){
            cout<<alphabet<<" ";
            alphabet ++;
        }
        cout<<endl;
    }


    return 0;
}
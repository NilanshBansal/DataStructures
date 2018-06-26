#include<iostream>
using namespace std;
int main(){

    int n;
    char alphabet='A';
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<alphabet<<" ";
        }
        cout<<endl;
        alphabet++;
    }


    return 0;
}
#include<iostream>
using namespace std;
int main(){

    int n;
    bool alphabet=1;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=n-1;j>=i;j--){
            cout<<alphabet<<" ";
        }
        cout<<endl;
        alphabet=!alphabet;
    }


    return 0;
}
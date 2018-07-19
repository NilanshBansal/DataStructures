#include<iostream>
using namespace std;

int main(int argc, char **argv){
    cout<<"arg count: "<<argc<<endl;
    // cout<<"Fi"argv[0];
    for (int i=0;i<argc;i++){
        cout<<"arg "<<i<<" : "<<argv[i]<<endl;
    }

    cout<<stoi(argv[1]) + stoi(argv[2]);



    return 0;
}
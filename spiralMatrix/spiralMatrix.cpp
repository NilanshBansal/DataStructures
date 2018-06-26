#include<iostream>
using namespace std;

int main(){

    int arr[10][10],maxrow,maxcol,minrow=0,mincol=0;

    cin>>maxrow;
    cin>>maxcol;

//taking values
    for(int i=minrow;i<maxrow;i++){
        for(int j=mincol;j<maxcol;j++){
            cin>>arr[i][j];
        }
    }

    //printing matrix

    for(int i=minrow;i<maxrow;i++){
        for(int j=mincol;j<maxcol;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    while(minrow<maxrow && mincol<maxcol){

        //printing first row
        for(int i=mincol;i<maxcol;i++){
            cout<<arr[minrow][i];
        }
        minrow++;

        //printing last col

        for(int i=minrow;i<maxrow;i++){
            cout<<arr[i][maxcol-1];
        }
        maxcol--;

        //printing last row

        for(int i=maxcol-1;i>=mincol;i--){
            cout<<arr[maxrow-1][i];
        }
        maxrow--;

        //printing first col

        for(int i=maxrow-1;i>=minrow;i--){
            cout<<arr[i][mincol];
        }
        mincol++;

    }


    return 0;
}
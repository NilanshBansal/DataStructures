#include<iostream>
using namespace std;

int main(){

    int arr[10][10],maxrow,maxcol,minrow=0,mincol=0;

    maxrow=5;
    maxcol=5;
    int count=1;
    
    while(minrow<maxrow && mincol<maxcol ){

        //entering  first row
        for(int i=mincol;i<maxcol;i++){
            arr[minrow][i]=count;
            count++;
            
        }
        minrow++;

        //entering last col

        for(int i=minrow;i<maxrow;i++){
            arr[i][maxcol-1]=count;
            count++;
        }
        maxcol--;
        

        //entering last row

        for(int i=maxcol-1;i>=mincol;i--){
            arr[maxrow-1][i]=count;
            count++;
        }
        maxrow--;

        //entering first col

        for(int i=maxrow-1;i>=minrow;i--){
            arr[i][mincol]=count;
            count++;
        }
        mincol++;

    }
    minrow=0;
    maxrow=5;
    mincol=0;
    maxcol=5;

    cout<<"printing matrix"<<endl;
    for(int i=minrow;i<maxrow;i++){
        for(int j=mincol;j<maxcol;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}
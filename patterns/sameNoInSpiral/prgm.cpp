#include<iostream>
using namespace std;
int main(){
    int n=3,count;
    cout<<"enter size of matrix: ";
    cin>>n;
    cout<<"enter outer row element :";
    cin>>count;
    int **arr=new int*[n];
    
    for(int i=0;i<n;i++){
        arr[i]=new int[n];
    }
    // int count=n;
    int rowstart=0,colstart=0,rowend=n,colend=n;
    while(rowstart<rowend && colstart<colend){
        //first row
        for(int i=colstart;i<colend;i++){
            arr[rowstart][i]=count;
        }
        rowstart++;

        //last col
        for(int i=rowstart;i<rowend;i++){
            arr[i][colend-1]=count;
        }
        colend--;

        //last row
        for(int i=colend-1;i>=colstart;i--){
            arr[rowend-1][i]=count;
        }
        rowend--;

        //first col
        for(int i=rowend-1;i>=rowstart;i--){
            arr[i][colstart]=count;
        }
        colstart++;

        count--;



    }

    //displaying array

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}
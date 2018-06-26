#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ** arr= new int * [n];
    for(int i=0;i<n;i++){
        arr[i]=new int [n];
    }

    int top=0,bottom=n-1,count=1;
    bool flag=false;  

    while(top<=bottom){
        if(flag==false)
        {   for(int i=0;i<n;i++)
            {
                arr[top][i]=count;
                count++;
            }
            top++;
        }
        else{
            for(int i=0;i<n;i++){
                arr[bottom][i]=count;
                count++;
            }
            bottom--;
        }

        flag=!flag;
        
    }

    //displaying array

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
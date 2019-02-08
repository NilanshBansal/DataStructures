#include<iostream>
using namespace std;

int find_max_value(int value[],int weight[],int bag_weight,int si,int ei,int max_value){
    if(si>ei){return max_value;}
    if(si==ei){
       if(weight[si]>bag_weight){
           return max_value;
       } 
       else{
           return max_value + value[si];
       }
    }
    int a = find_max_value(value,weight,bag_weight-weight[si],si+1,ei,max_value + value[si]);
    int b = find_max_value(value,weight,bag_weight,si+1,ei,max_value);
    return max(a,b);

}

int main(){

    int value[100],weight[100],bag_weight,n;

    cin>>n;
    for(int i=0;i<n;i++){
        cin>>value[i];
    }

    for(int i=0;i<n;i++){
        cin>>weight[i];
    }

    cin>>bag_weight;

    cout<<find_max_value(value,weight,bag_weight,0,n-1,0);




    return 0;
}
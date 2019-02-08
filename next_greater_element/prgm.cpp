#include<iostream>
#include<stack>
#include<unordered_map>
using namespace std;

void print_next_nge(int *arr,int n){
    unordered_map<int,int>umap;
    if(n==0){return;}
    stack<int> s;

    s.push(arr[0]);
    int element,next;
    for(int i=1;i<n;i++){
        next = arr[i];
        if(!s.empty()){
            element = s.top();
            s.pop();
            while(element<next){
                // cout<<"\n"<<element<<"---> "<<next;s
                umap[element] = next;
                if(s.empty()){
                    break;
                }
                element = s.top();
                s.pop();
            }
            if(element>next){
                s.push(element);
            }
        }
        s.push(next);
    }
    while(!s.empty()) {
        element = s.top();
        s.pop();
        next = -1;
        // cout<<"\n"<<element<<"---> "<<next;
        umap[element]=next;
    }  
    for(int k=0;k<n;k++){
        cout<<"\n"<<arr[k]<<"---> "<<umap[arr[k]];
    }
}


int main(){

    

    int n;
    cin>>n;

    int*arr = new int[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    print_next_nge(arr,n);

    cout<<endl;

    return 0;
}
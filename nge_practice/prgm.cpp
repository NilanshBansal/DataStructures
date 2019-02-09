#include<iostream>
#include<vector>
#include<stack>
#include<unordered_map>
using namespace std;

void nge(vector<int>arr){
    int n = arr.size();
    int next,element;
    if(n==0){return;}
    stack<int>s;
    unordered_map<int,int>umap;
    s.push(arr[0]);

    for(int i=1;i<n;i++){
        next = arr[i];
        
        if(!s.empty()){
            element = s.top();
            s.pop();
            while(next > element){
                // cout<<endl<<element<<" ---> "<<next;
                umap[element] = next;
                if(s.empty()){
                    break;
                }
                element = s.top();
                s.pop();
            }
            if(element > next){
                s.push(element);
            }

        }
        s.push(next);
    }

    while(!s.empty()){
        next = -1;
        element = s.top();
        s.pop();
        // cout<<endl<<element<<" ---> "<<next;
        umap[element] = next;
    }
    for(int k=0;k<n;k++){
        cout<<umap[arr[k]]<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;

    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    nge(arr);

    return 0;
}
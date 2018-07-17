#include<iostream>
using namespace std;

int fib_helper(int n, int *ans){
    if(n<=1){
        ans[n]=n;
        return n;
    }
    if(ans[n-1] == 0){
        ans[n-1]= fib_helper(n-1,ans);
    }
    if(ans[n-2] == 0){
        ans[n-2]= fib_helper(n-2,ans);
    }
    ans[n] = ans[n-1] + ans[n-2];
    return ans[n]; 
}

int fib(int n){
    int *ans = new int[n+1];
    for(int i=0;i<=n;i++){
        ans[i]=0;
    }
    return fib_helper(n,ans);
}

int fib_DP(int n){
    int *ans = new int[n+1];
    ans[0]=0;
    ans[1]=1;
    for(int i=2;i<=n;i++){
        ans[i] = ans[i-1] + ans[i-2];
    }
    return ans[n];
}


int main(){
    int n;
    cin>>n;
    cout<<fib(n)<<endl;
    cout<<fib_DP(n)<<endl;

    return 0;
}
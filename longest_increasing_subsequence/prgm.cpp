//VIDEO 
//https://www.youtube.com/watch?v=4fQJGoeW5VE&feature=youtu.be

#include <bits/stdc++.h>
#include<iostream>
using namespace std;

// Complete the longestIncreasingSubsequence function below.
int longestIncreasingSubsequence(vector<int> arr) {
    vector<vector<int>> lis(arr.size()); //lis that ends with arr[i]

    lis[0].push_back(arr[0]); 
    for(int i=1;i<arr.size();i++){
        for(int j=0;j<i;j++){
            if(arr[j]<arr[i] && lis[j].size() + 1 > lis[i].size()){
                lis[i] = lis[j];
            }
        }
        lis[i].push_back(arr[i]);
    }
    int maxlen = 0;
    for(int i=0;i<lis.size();i++){
        // cout<<lis[i]<<endl;
        for(int j=0;j<lis[i].size();j++){
            cout<<lis[i][j]<<" ";
        }
        cout<<endl;
        if(maxlen<lis[i].size()){
            maxlen = lis[i].size();
        }
    }
    return maxlen;
    
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item;
        cin >> arr_item;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        arr[i] = arr_item;
    }

    int result = longestIncreasingSubsequence(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}

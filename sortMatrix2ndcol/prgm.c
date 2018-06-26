#include <stdio.h>
#include<string.h>
#include<algorithm>
#include<stdlib.h>
#include <bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<int, int> umap;

    int matrix[100][100],n,secondCol[100];
    printf("enter size of matrix: ");
    scanf("%d",&n);
    printf("\nenter elements");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&matrix[i][j]);
        }
    }

    for(int i=0;i<n;i++){
        secondCol[i]=matrix[i][1];
    }
    
    sort(secondCol,secondCol+n);

    for(int i=0;i<n;i++){
        
    }



    return 0;
}
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


void printMatrix(int arr[100][100],int m,int n){
    for (int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int arr[100][100],rowno=0,colno=0,maxrow,maxcol;
    printf("enter no of rows: ");
    scanf("%d",&maxrow);
    printf("enter no of cols: ");
    scanf("%d",&maxcol);
    printf("\nenter the values of matrix: ");
    for (int i=0;i<maxrow;i++){
        for(int j=0;j<maxcol;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nprinting original matrix: \n");
    
    printMatrix(arr,maxrow,maxcol);
    
    printf("soln is: ");
    while(rowno<maxrow && colno<maxcol){
    
        //printing first row from remaining rows
        for(int i=colno;i<maxcol;i++){
            printf("%d ",arr[rowno][i]);
        }
        rowno++;
        //printing last col from remaining cols
        for(int i=rowno;i<maxrow;i++){
            printf("%d ",arr[i][maxcol-1]);
        }
        maxcol--;
        
        //printing last row from remaining rows
        
        for(int i=maxcol-1;i>=colno;i--){
            printf("%d ",arr[maxrow-1][i]);
        }
        maxrow--;
        
        //printing first column
        for(int i=maxrow-1;i>=rowno;i--){
            printf("%d ",arr[i][colno]);
        }
        colno++; 
    }
    printf("\n");
    return 0;
}


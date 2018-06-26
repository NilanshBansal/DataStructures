#include<iostream>
using namespace std;

int length(char str[]){
    if(str[0]=='\0'){
        return 0;
    }
    return 1 + length(str+1);
}
int main(){
    char str[100];
    //fgets(str,100,stdin);
    gets(str);
    cout<<length(str);


    return 0;
}
#include<iostream>
using namespace std;

void removeX(char str[]){
    if(str[0]=='\0'){
        return;
    }
    if(str[0]!='x' && str[0]!='X' ){
        return removeX(str+1);
    }
    else{
        int i=1;
        for(;str[i]!='\0';i++){
            str[i-1]=str[i];
        }
        str[i-1]=str[i];
        return removeX(str);
    }
}

int main(){
    char str[100];

//    fgets(str,100,stdin);
  gets(str);
    puts(str);
cout<<strlen(str);
    //removeX(str);
    puts(str);
    int len=strlen(str);
    cout<<len<<endl;

    return 0;
}
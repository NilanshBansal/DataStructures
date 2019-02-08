#include<iostream>
using namespace std;


int main(){
char plain[100],cipher[100],key;

fgets(plain,100,stdin);

cin>>key;
int i = 0;
for(;plain[i]!='\0';i++){

cipher[i] = plain[i] + key;
if(cipher[i] > 'z'){
cipher[i] = cipher[i] - 'z' + 'a' - 1;

}

}

cipher[i] = plain[i];

cout<<endl<<"CIPHER TEXT IS: ";
for(int k = 0;cipher[k]!='\0';k++){
cout<<cipher[k]<<" ";

}


return 0;
}

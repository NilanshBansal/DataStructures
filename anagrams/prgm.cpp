#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

int main(){
string abc;
int flag = 1;
unordered_map<char,bool> umap;

getline(cin,abc);

for(int i=0;i<abc.length();i++){
    umap[abc[i]] = true;
}

for(char alphabet='a';alphabet<='z';alphabet++){
    // cout<<alphabet<<endl;
    if(umap[alphabet]==false){
        cout<<"NOT ANAGRAM ! "<<endl;
        flag = 0;
        break;
    }
}
if(flag == 1){
cout<<"ANAGRAM!"<<endl;

}   
return 0;
}
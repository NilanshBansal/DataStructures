#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<string>tillnow(17576);
    int curindex = 0;

    // FIRST LINE 
    for (char alpha='a';alpha<='z';alpha++){
        for(int i=0;i<17576/26;i++){
            tillnow[curindex].push_back(alpha);
            curindex++;
        }
    }
    

    curindex = 0;

    //SECOND LINE

    for (char alpha='a';alpha<='z';alpha++){
        for(int i=0;i<17576/(26*26);i++){
            tillnow[curindex].push_back(alpha);
            curindex++;
        }
        if(alpha=='z' && curindex!=17576) {
            alpha='a';
        }
        if(curindex == 17576){
            break;
        }
    }

    curindex = 0;

    //THIRD LINE

    for (char alpha='a';alpha<='z';alpha++){
        for(int i=0;i<17576/(26*26*26);i++){
            tillnow[curindex].push_back(alpha);
            curindex++;
        }
        if(alpha=='z' && curindex!=17576) {
            alpha='a';
        }
        if(curindex == 17576){
            break;
        }
    }

    //Printing Vector

    for(int i=0;i<tillnow.size();i++){
        cout<<tillnow[i]<<endl;
    }
    return 0;
}
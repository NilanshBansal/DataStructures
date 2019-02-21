#include<iostream>
#include<vector>
#include <fstream>

using namespace std;

int main(){
    vector<string>tillnow(17576);
    
    int numdigits = 3;
    int curindex = 0;
    int divide_factor = 26;

    for(int i=0;i<numdigits;i++){
        for (char alpha='a';alpha<='z';alpha++){
            for(int i=0;i<17576/divide_factor;i++){
                tillnow[curindex].push_back(alpha);
                curindex++;
            }
            if(curindex == 17576){
                break;
            }
            if(alpha=='z' && curindex!=17576) {
                alpha='a' - 1;
            }
        }
        curindex = 0;
        divide_factor *= 26;
    }
    
    
    
    //Printing Vector

    for(int i=0;i<tillnow.size();i++){
        cout<<tillnow[i]<<endl;
    }


    //Writing to a File
    ofstream myfile;
    myfile.open("3_digit_comb_loop.txt");

    for(int i=0;i<tillnow.size();i++){
        // cout<<tillnow[i]<<endl;
        myfile <<tillnow[i];
        myfile<<"\n";
    }


    return 0;
}
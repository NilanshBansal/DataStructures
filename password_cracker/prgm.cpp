#include<iostream>
#include<vector>
#include <fstream>

using namespace std;

int main(){
    clock_t tStart = clock();

    char start = 'a';
    char end = 'z';
    int numdigits = 6;


    int total_outcomes = 1;
    int unique_alphabets = (end-start) + 1;

    for(int i=0;i<numdigits;i++){
        total_outcomes *= unique_alphabets;
    }

    vector<string>tillnow(total_outcomes);
    int curindex = 0;
    int divide_factor = unique_alphabets;

    for(int i=0;i<numdigits;i++){
        for (char alpha=start;alpha<=end;alpha++){
            for(int i=0;i<total_outcomes/divide_factor;i++){
                tillnow[curindex].push_back(alpha);
                curindex++;
            }
            if(curindex == total_outcomes){
                break;
            }
            if(alpha==end && curindex!=total_outcomes) {
                alpha=start - 1;
            }
        }
        curindex = 0;
        divide_factor *= unique_alphabets;
    }
    
    
    //Printing Vector

    // for(int i=0;i<tillnow.size();i++){
    //     cout<<tillnow[i]<<endl;
    // }


    //Writing to a File
    ofstream myfile;
    myfile.open(to_string(numdigits) + "_digit" + "_unique_" + start + "_to_"  + end + ".txt");

    for(int i=0;i<tillnow.size();i++){
        myfile <<tillnow[i];
        myfile<<"\n";
    }

    cout<<"\nTime taken: "<<(double)(clock() - tStart)/CLOCKS_PER_SEC<<" seconds"<<<endl;

    return 0;
}
#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<string,int> myMap;
    myMap["key1"] = 1;
    myMap["key2"] = 2;
    myMap["key3"] = 3;
    myMap["key4"] = 4;
    myMap["key5"] = 5;
    myMap["key6"] = 6;

    unordered_map<string,int>::iterator it = myMap.begin();
    while(it!=myMap.end()){
        cout<<"Key: "<<it->first << "Value: " <<it->second<<endl;
        it++;
    }
    return 0;
}

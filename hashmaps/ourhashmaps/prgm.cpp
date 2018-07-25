#include<iostream>
#include "ourmaps.h"
using namespace std;

int main(){
    ourmap<int> myMap;
    myMap.insert("abc0",1); 
    cout<<myMap.getLoadFactor()<<endl;
    myMap.insert("abc1",2);
    cout<<myMap.getLoadFactor()<<endl;

    myMap.insert("abc2",3);
    cout<<myMap.getLoadFactor()<<endl;
    myMap.insert("abc3",4);
    cout<<myMap.getLoadFactor()<<endl;

    myMap.insert("abc4",5);
    cout<<myMap.getLoadFactor()<<endl;

    myMap.insert("abc5",6);
    
    cout<<myMap.getLoadFactor()<<endl;

   cout<<"size"<<myMap.size()<<endl;
   cout<<"deleted"<<myMap.remove("abc2")<<endl;
   cout<<"deleted"<<myMap.remove("abc3")<<endl;
   cout<<"size"<<myMap.size()<<endl;

   cout<<myMap.getValue("abc0")<<endl;
   cout<<myMap.getValue("abc1")<<endl;
   cout<<myMap.getValue("abc2")<<endl;
   cout<<myMap.getValue("abc3")<<endl;
   cout<<myMap.getValue("abc4")<<endl;
   cout<<myMap.getValue("abc5")<<endl;

    return 0;
}

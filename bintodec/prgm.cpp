#include<iostream>
using namespace std;

int main(){
int binno,rem,dec = 0,mulf=1;
cin>>binno;

while(binno > 0){
rem = binno % 10;
dec = dec + mulf * rem;
mulf*=2;
binno/=10;
}

cout<<"DECIMAL NO IS: "<<dec;
return 0;
}

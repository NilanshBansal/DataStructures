#include<iostream>
using namespace std;

int main(){
int dec,bin[20],rem;

cin>>dec;
int i = 0;
while(dec>0){

rem = dec%2;
bin[i++] = rem ;
dec = dec/2;

}

int j=0,temp,t = i-1,len = i;

while(j<t){

temp = bin[t];
bin[t] = bin[j];
bin[j] = temp;
j++;
t--;
}

for(int k = 0;k<len;k++){
cout<<bin[k]<<" ";
}
return 0;
}

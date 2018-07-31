#include<iostream>
#include<stack>
#include<string>
using namespace std;

bool checkParenthesis(string input){
    stack<char> s;
    char temp;
    for(int i=0;i<input.size();i++){
        if(input[i] == '{' || input[i] == '(' || input[i] == '[' ){
            s.push(input[i]);
        }
        else if(input[i] == '}' || input[i] == ')' || input[i] == ']'){
            if(s.empty()){
                return false;
            }
            temp = s.top();
            if((temp == '{' && input[i] == '}') || (temp == '(' && input[i] == ')') || (temp == '[' && input[i] == ']')){
                s.pop();
                continue;
            }
            else{
                return false;
            }
        }
    }

    if(!s.empty()){
        return false;
    }

    return true;
}

int main(){
    string input;
    cout<<"Enter expression : "<<endl;
    getline(cin,input);

    cout<<(checkParenthesis(input)?"BALANCED EXPRESSION!":"NOT BALANCED !");    


    return 0;
}

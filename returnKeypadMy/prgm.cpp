#include <iostream>
using namespace std;

char returncharASCII(int no)
{
    if (no == 8)
    {
        return 84;
        // return 'T';
    }
    if (no == 9)
    {
        return 87;
        //return 'W';
    }
    return 62 + (no - 1) * 3;
}

int return_keypad(int n, string output[])
{
    if (n == 0 || n == 1)
    {
        output[0] = "";
        return 1;
    }
    int smallOutputSize = return_keypad(n / 10, output);
    int current_digit = n % 10;
    char alphabet = returncharASCII(current_digit);
    int loopNo=3;
    if(current_digit == 0 || current_digit ==1){
            return smallOutputSize;
        }
    for (int i = 0; i < smallOutputSize; i++)
    {   
        if (current_digit == 7 || current_digit == 9)
        {   
            output[i + (3 * smallOutputSize)] = output[i] + char(alphabet + 3);
            output[i + (2 * smallOutputSize)] = output[i] + char(alphabet + 2);
            output[i + smallOutputSize] = output[i] + char(alphabet + 1);
            output[i] = output[i] + char(alphabet + 0);
            loopNo = 4;
        }
        else{
            output[i+(2*smallOutputSize)] = output[i] + char(alphabet + 2); 
            output[i+smallOutputSize] = output[i] + char(alphabet + 1);
            output[i] = output[i] + char(alphabet + 0) ;
        }
    }
    return loopNo * smallOutputSize;
}

int main()
{
    int input;
    cin >> input;
    string *output = new string[10000];
    int len = return_keypad(input, output);
    cout << "Printing :- " << endl;
    for (int i = 0; i < len; i++)
    {
        cout << output[i]<<endl;
    }
    return 0;
}
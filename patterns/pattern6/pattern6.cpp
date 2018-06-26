#include <iostream>
using namespace std;
int main()
{

    int n, num;
    cin >> n;
    for (int i = n; i > 0; i--)
    {
         num=i;
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }

        for (int k = n; k > i; k--)
        {
            cout <<"**";
        }

        for(int m=1;m<=i;m++){
            cout<<num;
            num--;
        }

        cout << endl;
    }

    return 0;
}
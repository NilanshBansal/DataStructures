#include <iostream>
using namespace std;
int main()
{

    int n, count = 0,num;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {

        if (i % 2 == 0)
        {
        count += i;
        num=count;
        for (int j = 1; j <= i; j++)
            {
                cout << num;
                num--;
            }
            
        }
        if (i % 2 != 0)
        {
            
            for(int k=1;k<=i;k++){
                count++;
            cout<<count;
            }
            
        }

        
        cout << endl;
    }

    return 0;
}
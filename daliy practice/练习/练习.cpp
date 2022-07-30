#include<iostream>
using namespace std;
int main()
{
    int m, i, n = 0;
    for (m = 100; m <= 200; m = m + 1)
    {
        for (i = 2; i * i <= m; i++)
            if (m % i == 0)
            {
                break;
            }
        if (m % i != 0)
        {
            cout << m << " ";
            n++;
        }
    }
    cout << endl;
    cout << n << endl;
    return 0;
}
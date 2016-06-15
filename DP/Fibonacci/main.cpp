#include <iostream>

using namespace std;

void fibo(int n)
{
    int fibo[n];

    fibo[0] = 0;
    fibo[1] = 1;

    for ( int i = 2; i < n; i++ )
    {
        fibo[i] = fibo[i-2] + fibo[i-1];
    }

    for ( int i = 0; i < n; i++ )
    {
        cout << fibo[i] << endl;
    }
}

int main()
{
    int n = 0;

    cin >> n;

    fibo(n);

    return 0;
}

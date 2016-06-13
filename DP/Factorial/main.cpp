#include <iostream>

using namespace std;

int factorial(int n)
{
    int fact[n] ;
    fact[0] = 1;

    for ( int i = 1; i <= n; i++ )
    {
        fact[i] = i * fact[i-1];
    }

    return fact[n];
}


int main()
{
    int n = 0 ;
    int f = 0 ;

    cin >> n;

    f = factorial(n);
    cout << f << endl;

    return 0;
}

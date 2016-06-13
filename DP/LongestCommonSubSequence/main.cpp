#include <iostream>
#include <string.h>

using namespace std;

int lcs_length(const char *a,const char *b, int m, int n)
{
    int mem[m][n];

    for ( int i = 0; i <= m; i++ )
    {
        for ( int j = 0; j <= n; j++ )
        {
            if ( i == 0 || j == 0)
                mem[i][j] = 0;
            else if ( a[i-1 ] == b[j-1 ] )
                mem[i][j] = 1 + mem[i-1][j-1];
            else
                mem[i][j] = max(mem[i-1][j],mem[i][j-1]);
        }
    }

    return mem[m][n];

}

int main()
{
    char *s1 = "AGGTAB";
    char *s2 = "GXTXAYB";

    int l = lcs_length(s1,s2,strlen(s1),strlen(s2));

    cout << l;

    return 0;
}

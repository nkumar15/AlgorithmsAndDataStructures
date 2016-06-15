#include <iostream>
#include <stack>

using namespace std;

bool is_pair(char c, char t )
{
    if ( c == '[' && t ==']' )
        return true;

    if ( c == '{' && t =='}' )
        return true;

    if ( c == '(' && t == ')' )
        return true;

    return false;
}

/*

{[()]}
{[(])}
{{[[(())]]}}
{()

*/
int main() {

    int n = 0;
    char c;
    string line;

    cin >> n;
    //n = 5;
    while ( n-- > 0 )
    {
        cin >> line;

        int i = 0;
        int len = line.length();

        stack<char> stk;

        for( i = 0; i < len; i++ )
        {
            c = line[i];

            if ( c == '[' || c == '{' || c == '(' )
                stk.push(c);
            else if ( !stk.empty() )
            {
                char t = stk.top();
                if ( is_pair(t,c) )
                    stk.pop();
                else
                    break;
            }
            else
                break;
        }

        if( stk.empty() && i == len )
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        //line = "{{[[(())]]}}";
    }

    return 0;
}


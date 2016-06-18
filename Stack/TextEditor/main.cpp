#include <iostream>
#include <vector>
#include <stack>

/*
In this challenge, you must implement a simple text editor. Initially, your editor contains an empty string, . You must perform  operations of the following  types:

append - Append string  to the end of .
delete - Delete the last  characters of .
print - Print the  character of .
undo - Undo the last (not previously undone) operation of type  or , reverting  to the state it was in prior to that operation.

Sample Input

8
1 abc
3 3
2 3
1 xy
3 2
4
4
3 1

Sample Output
c
y
a
*/

using namespace std;

class TextEditor
{
    vector<char>  text;
    int lastOp;
    stack<string> commands;

public:
    TextEditor() { lastOp = -1 ;}
    void append(string s);
    void delet(int k);
    void print(int k);
    void undo();
};

void TextEditor :: append(string s)
{
    int i = 0;
    int l = s.length();
    while( i < l )
    {
        text.push_back(s[i]);
        i++;
    }

    commands.push("1" + s);
}

void TextEditor :: delet(int k)
{
    string lastStr;
    while ( k > 0)
    {
        lastStr += text.back();
        text.pop_back();
        k--;
    }

    commands.push("2" + lastStr);
}

void TextEditor :: print(int k)
{
    cout << text[k-1]<<endl;
}

void TextEditor :: undo()
{
   string cmd = commands.top();

   if ( cmd[0] == '1' )
   {
        int k = cmd.length() - 1;
        string lastStr;
        while ( k > 0)
        {
            lastStr += text.back();
            text.pop_back();
            k--;
        }
   }
   else
   {
        int i = 1;

        int l = cmd.length() ;

        while( i < l )
        {
            text.push_back(cmd[l-i]);
            i++;
        }
   }
   commands.pop();
}

int main()
{
    TextEditor te;

    int q = 0;

    cin >> q;
    int cmd = 0;
    string txt;

    while ( q-- > 0)
    {
        cin >> cmd;

        if ( cmd == 1)
        {
            cin >> txt;
            te.append(txt);
        }
        else if ( cmd == 2 )
        {
            int c;
            cin >> c;
            te.delet(c);
        }
        else if ( cmd == 3)
        {
            int c;
            cin >> c;
            te.print(c);
        }
        else
        {
            te.undo();
        }
    }

    return 0;
}

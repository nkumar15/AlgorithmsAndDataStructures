#include <iostream>

using namespace std;

struct Node
{
    Node(int d, int f) {
        data = d;
        freq = f;
        left = nullptr;
        right = nullptr;

    }
    char data;
    int freq;
    Node* left;
    Node* right;
};


Node* make_tree()
{
    Node* head = new Node('\0',5);
    Node* left = new Node('\0',2);
    Node* right = new Node('A',3);

    head->left = left;
    head->right = right;

    head->left->left = new Node('B',1);
    head->left->right = new Node('C',1);

    return head;

}

void decode_huff(Node * root,string s)
{

    int l = s.length();
    Node* curr = root;

    for ( int i = 0; i < l; i++ )
    {
        if ( s[i] == '1' )
            curr = curr->right;
        else
            curr = curr->left;

        if ( curr->left == nullptr && curr->right == nullptr )
        {
            cout << curr->data;
            curr = root;
        }

    }

}

int main()
{
    Node* head = make_tree();

    string s = "1001011";

    decode_huff(head,s);


    return 0;
}

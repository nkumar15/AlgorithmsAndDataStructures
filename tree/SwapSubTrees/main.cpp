#include <iostream>

using namespace std;

struct Node
{
    Node(int d) {
        data = d;
        left = nullptr;
        right = nullptr;

    }
    int data;
    Node* left;
    Node* right;
};


Node* make_tree()
{
    Node* head = new Node(1);
    Node* left = new Node(2);
    Node* right = new Node(3);

    head->left = left;
    head->right = right;

    head->left->left = new Node(4);
    head->left->right = new Node(5);

    head->right->left = new Node(6);
    head->right->right = new Node(7);

    return head;

}

void swap_subtrees(Node *node)
{
    if( node == nullptr )
        return;

    swap_subtrees(node->left);
    swap_subtrees(node->right);

    Node *t = node->left;
    node->left = node->right;
    node->right = t;
}

void in_order(Node *node)
{
    if ( node == nullptr )
        return;

    in_order(node->left);
    cout << node->data << " ";
    in_order(node->right);
}

void pre_order(Node *node)
{
    if ( node == nullptr )
        return;

    cout << node->data << " ";
    pre_order(node->left);
    pre_order(node->right);
}


void post_order(Node *node)
{
    if ( node == nullptr )
        return;

    post_order(node->left);
    post_order(node->right);
    cout << node->data << " ";
}

int main()
{
    Node* head = make_tree();

    cout << endl << "Before swap: " << endl;
    cout << "INO: ";
    in_order(head);
    cout << endl;
    cout << "PRE: ";
    pre_order(head);
    cout << endl;
    cout << "POS: ";
    post_order(head);

    swap_subtrees(head);

    cout << endl << "After swap: " << endl;
    cout << "INO: ";
    in_order(head);
    cout << endl;
    cout << "PRE: ";
    pre_order(head);
    cout << endl;
    cout << "POS: ";
    post_order(head);


    return 0;
}

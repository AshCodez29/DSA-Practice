#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};
Node *root = NULL;

Node *search(int value)
{
    if (root == NULL)
        return;
    Node *temp = root;
    while (temp != NULL && temp->data != value)
    {
        if (value < temp->data)
        {
            temp = temp->left;
        }
        if (value > temp->data)
        {
            temp = temp->right;
        }
    }
    return temp;
}
void Insert(int value)
{
    Node *node = new Node();
    node->data = value;
    node->left = node->right = NULL;
    if (root == NULL)
    {
        root = node;
        return;
    }
    Node *temp = root;
    while (temp != NULL && temp->data != value)
    {
        if (value < temp->data)
        {
            if (temp->left == nullptr)
            {
                temp->left = node;
                return;
            }
            temp = temp->left;
        }
        if (value > temp->data)
        {
            if (temp->right == nullptr)
            {
                temp->right = node;
                return;
            }
            temp = temp->right;
        }
    }
    Node* findMin(Node* node){
        while(node!=NULL && node->left!=NULL){
            node=node->left;
        }
        return node;
    }
    Node *deleteNode(Node * node, int value)
    {
        if (node == NULL)
            return NULL;
        if (value < node->data)
            node->left = deleteNode(node->left, value);
        else if (value > node->data)
            node->right = deleteNode(node->right, value);
        else
        {
            if (node->left == NULL)
            {
                Node *next = node->right;
                delete node;
                return next;
            }
            if (node->right == NULL)
            {
                Node *next = node->left;
                delete node;
                return next;
            }
            Node *next = findMin(node->right);
            node->data = next->data;
            node->right = deleteNode(node->right, next->data);
        }
        return node;
    }
}
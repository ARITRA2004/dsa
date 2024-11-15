#include <iostream>
using namespace std;

class BinarySearchTree
{

private:
    int data;
    BinarySearchTree *left;
    BinarySearchTree *right;

public:
    BinarySearchTree();
    // void AddNodeInBST(int);
    void AddNodeInBST(BinarySearchTree *&,int);
    void Inorder(BinarySearchTree *); //left -> root -> right
    void PreOrder(BinarySearchTree *); //root -> left -> right
};
BinarySearchTree *root = NULL;

BinarySearchTree::BinarySearchTree()
{
    left = nullptr;
    right = nullptr;
}

/*
void BinarySearchTree::AddNodeInBST(int data)
{
    BinarySearchTree *new_node = new BinarySearchTree;

    new_node->data = data;
    new_node->right = nullptr;
    new_node->left = nullptr;

    if (root == NULL)
    {
        root = new_node;
    }
    else
    {
        BinarySearchTree *temp;
        temp = root;

        while (temp->data != data)
        {
            if (data < temp->data)
            {
                if (temp->left != nullptr)
                {
                    temp = temp->left;
                }
                else
                {
                    temp->left = new_node;
                    break;
                }
            }
            else
            {
                if (temp->right != nullptr)
                {
                    temp = temp->right;
                }
                else
                {
                    temp->right = new_node;
                    break;
                }
            }
        }
    }
}
*/
/*
void BinarySearchTree::AddNodeInBST(BinarySearchTree *&temp,int data){

    if(temp == nullptr){
        temp = new BinarySearchTree;
        temp->data = data;
        temp->left = nullptr;
        temp->right = nullptr;
    }

    if(data < temp->data){
        AddNodeInBST(temp->left,data);
    }
    else{
            AddNodeInBST(temp->right,data);
    }
}*/

void BinarySearchTree::AddNodeInBST(BinarySearchTree *&temp, int data) {
    if (temp == nullptr) {
        temp = new BinarySearchTree;
        temp->data = data;
        temp->left = nullptr;
        temp->right = nullptr;
    } 
    else if (data < temp->data) {
        AddNodeInBST(temp->left, data);
    } 
    else {
        AddNodeInBST(temp->right, data);
    }
}

void BinarySearchTree::Inorder(BinarySearchTree *temp)
{

    if (temp != nullptr)
    {
        Inorder(temp->left);
        cout << temp->data << " ";
        Inorder(temp->right);
    }
}

void BinarySearchTree::PreOrder(BinarySearchTree *temp)
{

    if (temp != nullptr)
    {
        cout << temp->data << " ";
        Inorder(temp->left);
        Inorder(temp->right);
    }
}

int main()
{
    BinarySearchTree BST;
    int choice, value;

    while (1)
    {
        cout << "Binary Search Tree Operations" << endl;
        cout << "1. Add data in Binary search tree" << endl;
        cout << "2. Display : Inorder" << endl;
        cout << "3. Disiplay : Preorder" << endl;
        cout << "3. Exit" << endl
             << endl;

        cout << "Enter your choice : ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "enter a value : ";
            cin >> value;
            BST.AddNodeInBST(root,value);
        }
        else if (choice == 2)
        {
            cout << "Inorder form : "<< endl;
            BST.Inorder(root);
            cout << endl;
        }
        else if (choice == 3)
        {
            BST.PreOrder(root);
        }
        else if(choice == 4){
            break;
        }
        cout << endl;
    }
    return 0;
}
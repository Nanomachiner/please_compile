#include <iostream>
#include <cstdlib>
#include <stack>

using namespace std;

struct bnode
{
    char data;
    bnode *left;
    bnode *right;
};

void InsertRandom(bnode *& root, char c)
{
    if (root == 0)
    {
        root = new bnode;
        root->data = c;
        root->left = root->right = nullptr; 
    }
    else
    {
        int r = rand();
        if (r%2 == 0)
            InsertRandom(root->left, c);
        else
            InsertRandom(root->right,c);
    }
}

void PostOrderRecursive(bnode *root)
{
    if (root != nullptr)
    {
        PostOrderRecursive(root->left);
        PostOrderRecursive(root->right);
        cout << root->data << " ";
    }
}

void PostOrderStack(bnode *root)
{
    bnode *bp;
    // Define a stack of bnode*, stk1, and a stack of char, stk2.
    stack<bnode*> stk1;
    stack<char> stk2;
    
    // Push root onto stk1
    stk1.push(root);
    
    // As long as stk1 is not empty:
        // Set bnode *bp equal to the top of stk1, pop stk1, and push the character
        // in the bnode pointed to by bp (that is, bp->data) onto stk2.
    
    while (!stk1.empty())
    {
        bnode *bp = stk1.top();
        stk1.pop();
        stk2.push(bp->data);
        
        // If the left subtree of bp is not empty (that is if bp->left is not nullptr)
        // push bp->left onto stk1.
            if(bp->left != nullptr)
            {
                stk1.push(bp->left);
            }
    
        // If the right subtree of bp is not empty (that is if bp->right is not nullptr)
        // push bp->right onto stk1.
            if(bp->right != nullptr)
            {
                stk1.push(bp->right);
            }
    }
    
    
    // Lastly, as long as stk2 is not empty:
        // Print the char on top of stk2 and pop stk2.
    while (!stk2.empty())
    {
        cout << stk2.top();
        stk2.pop();
    }
    
}

int main()
{
    bnode *root = nullptr; // Empty binary tree to start with.
    
    srand(time(0)); //Seed rand so that it will generate a different random sequence every time the program is run.
    
    for (char c = 'A'; c <= 'Z'; ++c)
    {
        InsertRandom(root,c);
    }
    cout << "Post order using recursive approach: \n";
    PostOrderRecursive(root); cout << endl << endl;
    
    cout << "Post order using explicit stack (should agree with the recursive one):\n";
    PostOrderStack(root); cout << endl;
    
    return 0;
}
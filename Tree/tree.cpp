#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* buildTree(vector<int>v,int ind)
{
    if(v.size() <= ind)    return NULL;

    Node* root = new Node(v[ind]);
    root -> left = buildTree(v,2*ind + 1);
    root -> right = buildTree(v,2*ind + 2);

    return root;
}


//InOrderTraversal
void inorderTraversal(Node* root)
{
    if(root == NULL) return;

    inorderTraversal(root->left);
    cout<<root->data<<" ";
    inorderTraversal(root->right);
}

//PreOrder Traversal
void preOrderTraversal(Node* root)
{
    if(root == NULL) return;

    cout<<root->data<<" ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

//PostOrder Traversal
void postOrderTraversal(Node* root)
{
    if(root == NULL) return;

    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
    cout<<root->data<<" ";
}

//levelOrder Traversal
void LevelOrderTraversal(Node* root)
{
    if(root == NULL) return;

    queue<Node*>q;
    q.push(root);

    while(!q.empty())
    {
        Node*  temp = q.front();
        cout<<q.front()->data<<" ";
        q.pop();

        if(temp->left)             q.push(temp->left);
        if(temp->right)            q.push(temp->right);
    }
}

int main()
{
    vector<int>arr = {1,2,3,4,5,6,7};
    Node* root = buildTree(arr,0);

    cout<<"Inorder Traversal: "<<endl;
    inorderTraversal(root);
    cout<<endl;
    cout<<"Preorder Traversal: "<<endl;
    preOrderTraversal(root);
    cout<<endl;
    cout<<"Postorder Traversal: "<<endl;
    postOrderTraversal(root);
    cout<<endl;
    cout<<"LevelOrder Traversal: "<<endl;
    LevelOrderTraversal(root);
    cout<<endl;
    return 0;
}
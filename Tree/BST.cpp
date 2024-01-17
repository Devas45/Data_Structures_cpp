#include<bits/stdc++.h>
using namespace std;

class Node{
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

Node* insertintoBST(Node* root,int d)
{
    if(root == NULL)
    {
        root = new Node(d);
        return root;
    }

    if(d > root->data)                  root->right =  insertintoBST(root->right,d);
    else                                root->left  =  insertintoBST(root->left,d);

    return root;
}

void levelOrderTraversal(Node* root)
{
    if(root == NULL)           return;
    queue<Node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {
        Node* temp = q.front();
        if(temp == NULL){
            cout<<endl;                                                     //end of a level
            q.pop();
            if(!q.empty())          q.push(NULL);                           //for other child nodes
        }
        else{
            cout<<temp->data<<" ";
            q.pop();
            if(temp->left)               q.push(temp->left);
            if(temp->right)              q.push(temp->right);
        }
    }
}

void inOrder(Node* root)
{
    if(root == NULL)    return;

    inOrder(root->left);
    cout<<" "<<root->data<<" ";
    inOrder(root->right);
}

void preOrder(Node* root)
{
    if(root == NULL)    return;

    cout<<" "<<root->data<<" ";
    preOrder(root->left);
    inOrder(root->right);
}

void postOrder(Node* root)
{
    if(root == NULL)    return;

    postOrder(root->left);
    postOrder(root->right);
    cout<<" "<<root->data<<" ";
}

void takeInput(Node* &root)
{
    int data;
    cin>>data;

    while(data != -1)
    {
        root = insertintoBST(root,data);
        cin>>data;
    }
}

Node* findMin(Node* root)
{
    Node* temp = root;
    while(temp->left != NULL)
    {
        temp = temp->left;
    }
    return temp;
}

Node* findMax(Node* root)
{
    Node* temp = root;
    while(temp->right != NULL)
    {
        temp = temp->right;
    }
    return temp;
}

Node* deleteBST(Node* root, int x)
{
    if(root == NULL)
    {
        return NULL;
    }

    if(root->data == x)
    {
        Node* temp = root;

        if(!temp->left && !temp->right)
        {
            delete temp;
            return NULL;
        }
        if(temp->left && !temp->right)
        {
            Node* q = temp->left;
            delete temp;
            return q;
        }
        if(!temp->left && temp->right)
        {
            Node* q = temp->right;
            delete temp;
            return q;
        }
        if(temp->left && temp->right)
        {
            int k = findMin(temp->right)->data; 
            temp->data = k;
            temp->right = deleteBST(temp->right, k); 
            return temp; 
        }
    }
    else if(root->data > x)
    {
        root->left = deleteBST(root->left, x); 
        return root;
    }
    else
    {
        root->right = deleteBST(root->right, x); 
        return root;
    }
}


int main()
{
    Node* root = NULL;

    cout<<"Enter Data to create BST   (To stop enter -1)   : "<<endl;
    takeInput(root);

    cout<<"Printing BST:  "<<endl;
    levelOrderTraversal(root);


    cout<<endl<<"Printing InOrder Traversal : "<<endl;
    inOrder(root);
    cout<<endl;


    cout<<endl<<"Printing preOrder Traversal : "<<endl;
    preOrder(root);
    cout<<endl;


    cout<<endl<<"Printing postOrder Traversal : "<<endl;
    postOrder(root);
    cout<<endl;

    cout<<"Enter Node To Delete: "<<endl;
    int d;
    cin>>d;
    root = deleteBST(root,d);
    cout<<endl;
    cout<<"LevelOrder Traversal: "<<endl;
    levelOrderTraversal(root);
    cout<<endl;

    return 0;
}
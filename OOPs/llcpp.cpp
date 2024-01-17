#include<iostream>
#include "unordered_map"
using namespace std;

class Node
{
    
    public:
    int data;
    Node* next;

    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};
void insertatbeg(Node* &head,int d)
{
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
    return;
}
void print(Node* &head)
{
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    return;
}
void insertatpos(Node* &head,int pos,int d)
{
    if(pos=1)
    { 
        insertatbeg(head,d); 
        return;
    }
    Node* temp=head;
    int cnt=1;
    while(cnt<pos-1)
    {
        temp=temp->next;
        cnt++;
    }
    Node* newNode=new Node(d);
    newNode->next=temp->next;
    temp->next=newNode;
    return;
}
void deleteatbeg(Node* &head)
{   
    Node* temp=head;
    head=head->next;
    free(temp);
    return;
}
void deleteatpos(Node* &head,int pos)
{
    if(pos==1) 
    {
        deleteatbeg(head);
        return;
    }
    int cnt=1;
    Node* temp=head;
    Node* prev=NULL; 
    while(cnt<=pos)
    {
        prev=temp;
        temp=temp->next;
        cnt++;
    }
    prev->next=temp->next;
    temp->next=NULL;
    free(temp);
    return;
}

void search(Node* &head,int d)
{
    Node* temp=head;
    int pos=1;

    while(temp!=NULL)
    {   
        if(temp->data=d)
        {
            int search=pos;
        }
        temp=temp->next;
        ++pos;
    }
    cout<<"The member "<<d<<" is serached at "<<search<<" position"<<endl;
    return;
}

void reverse(Node* &head)
{
    Node* temp=head;
    Node* prev=NULL;
    while(temp!=NULL)
    {
        Node* p=temp->next;
        temp->next=prev;
        prev=temp;
        temp=p;
    }
        head=prev;
}

void reversef(Node* &head,Node* &prev,Node* &curr)
{
    if(curr==NULL)
    {
        head=curr;
        return;
    }

    Node* forward=curr->next; 
    reversef(head,curr,forward);
    curr->next=prev;
}

Node* reverseRecursive(Node* &head)
{
    Node* prev=NULL;
    Node* curr=head;
    reversef(head,prev,curr);
    return head;

}

Node* removeDuplicate_Hash(Node* head)
{
    unordered_map<Node*,bool> mp;
    Node* curr=head;

    while(curr!=NULL)
    {
        
    }
}


int main()
{
    Node* node1 =new Node(10);

    Node* head=node1;
    insertatbeg(head,20);
    print(head);

    insertatbeg(head,20);
    print(head);

    insertatbeg(head,15);
    print(head);

    insertatpos(head,2,15);
    print(head);

    insertatpos(head,2,40);
    print(head);
    
    deleteatbeg(head);
    print(head);
    
    // deleteatpos(head,2);
    // print(head);

    // search(head,10);
    reverse(head);    
    print(head);  

    reverseRecursive(head);
    print(head);

    

    return 0;
}

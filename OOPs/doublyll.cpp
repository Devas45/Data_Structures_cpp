#include<iostream>

using namespace std;

class Node
{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int d)
    {
        this->data=d;
        this->prev=NULL;
        this->next=NULL;        
    }
};

void print(Node* &head)
{
    Node* temp=head;
    while(temp !=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void Insertathead(Node* &head,int d)
{
    if(head==NULL) {
    Node* temp=head;
    head=temp;
    }
    else
    {
        Node* temp= new Node(d);
        temp->next=head;
        head->prev=temp;
        head=temp;
        
    }
}

void Insertattail(Node* &head,int d)
{
    Node* newnode=new Node(d);
    if(head==NULL) {
    Node* temp=head;
    head=temp;
    
    }
    else
    {Node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->prev=temp->next;
    newnode=temp;
    }
}

int get_length(Node* &head)
{
    Node* temp=head;
    int len=0;
    while(temp!=NULL)
    {
        len++;
        temp=temp->next;
    }
    return len;
}



void Insertatpos(Node* &head,int d,int pos,int l)
{
    Node* newnode =new Node(d);
    Node* temp=head;
    if(head==NULL)
    {
        Insertathead(head,d);
        return;
    }
    else if(pos==l)
    {
        Insertattail(head,d);
        
    }
    else if(pos<l)
    {
        Node* temp=head;
        for(int i=0;i<pos-1;i++)
        {
            temp=temp->next;
        }   
        newnode->next=temp->next;
        temp->next->prev=newnode;
        temp->next=newnode;
        newnode->prev=temp;
    }
    else{
        cout<<"Invalid choice"<<endl;
    }
}

int main()
{
    Node* node1= new Node(10); 
    Node* head=NULL;
    Node* tail=node1;    
    Insertathead(head,20);
    print(head);
    Insertathead(head,30);
    print(head);
    Insertathead(head,40);
    print(head);
    Insertattail(head,5);
    print(head);

    int l=get_length(head);

    Insertatpos(head,56,3,l);
    print(head);

    return 0;
}
#include<iostream>
using namespace std;

struct node
{
    int data;
    node* link;
};

int main()
{
    node*first=new node();
    node*second=new node();
    node*third=new node();

    first->data=10;
    second->data=100;
    third->data=15;
    first->link=second;
    second->link=third;
    third->link=NULL;
    node*head=first;
    node *temp=head;
   

    //insert at beginning
    node*begining=new node();
    
    begining->data=99;
    begining->link=head;
    head=begining;
    temp=head;

     while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->link;

    }









}
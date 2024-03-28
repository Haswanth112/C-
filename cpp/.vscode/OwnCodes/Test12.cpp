#include<iostream>
using namespace std;
class Node
{
    public:
    int value;
    Node* Next;
};
void Printlist(Node* head)
{
    while(head!=nullptr)
    {
        cout<<head->value<<endl;
        head=head->Next;
    }
}
void insertAtTheFront(Node** int newvalue)
{
    Node* newNode=New Node();
    newNode->value=newvalue;
    newNode->Next=*head;
    *head=newNode();
}
int main()
{
    Node* head=new Node();
    Node* second=new Node();
    Node* Third=new Node();
    head->value=1;
    head->Next=second;
    second->value=2;
    second->Next=Third;
    Third->value=3;
    Third->Next=nullptr;
    Printlist(head);
}
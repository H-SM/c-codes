#include<iostream>
#include<unordered_map>

using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int data)
    {
        this->data=data;
        next=NULL;
    }
};

bool containsCycle(node *head){
    //complete this function using hashtable
    unordered_map<node*,bool> hashtable;
    node* temp= head;
    while(temp!=NULL){
        //check if temp already exist in the hashtable
        if(hashtable.count(temp)!=0){
            return true; 
        }
        //insert in the hashtable 
        hashtable[temp]=true;
        temp=temp->next;
    }
    return false;
}
void insertAtHead(node * &head, int data){
    if(head==NULL)
    {
        head = new node(data);
        return;
    }
    //otherwise
    node * n=new node(data);
    n->next=head;
    head=n;
}
int main()
{
    node* a=NULL;
    insertAtHead(a,1);
    insertAtHead(a,2);
    insertAtHead(a,3);
    insertAtHead(a,3);
    insertAtHead(a,3);
    
    node *temp=a->next->next->next->next;
    temp->next=a->next->next;

    if(containsCycle(a))
        cout<<"Cycle found"<<endl;    
    else
        cout<<"Cycle not found"<<endl;  
    return 0;
}
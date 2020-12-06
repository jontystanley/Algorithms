#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int d){
        data=d;
        next=NULL;
    }
};

void insertAtHead(node* &head, int data){
    node* n=new node(data);
    n->next=head;
    head=n;
}

int len(node* head){
    int count=0;
    while(head->next!=NULL){
        head=head->next;
        count++;
    }
    return count;
}

void insertAtTail(node* &head, int data){
    if(head==NULL){
        head=new node(data);
        return;
    }
    node* n=new node(data);
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

void insertAtMiddle(node* &head,int data,int afterpos){
    
    if(head==NULL||afterpos==0){
        insertAtHead(head,data);
    }
    else if(afterpos>len(head)){
        insertAtTail(head,data);
    }
    else{
        node* n=new node(data);
        node* temp=head;
    while((afterpos--)!=1){
        temp=temp->next;
    }
    n->next=temp->next;
    temp->next=n;

    }
}


void print(node* head){
    while(head!=NULL){
        cout<<head->data<<"-->";
        head=head->next;
    }
    cout<<'\n';
}

void deleteAtHead(node* &head){
    if(head==NULL){
        return;
    }
    node* temp=head;
    head=head->next;
    delete temp;
}

void deleteAtTail(node* &head){
    if(head==NULL){
        return;
    }
    node* prev=NULL;
    node* temp=head;
    while(temp->next!=NULL){
        prev=temp;
        temp=temp->next;
    }
    delete temp;
    prev->next=NULL;
}

void deleteAtMiddle(node* &head, int pos){
    if(head==NULL|| pos>len(head)){
        return;
    }
    node* prev=NULL;
    node* temp=head;
    while((pos--)!=1){
        prev=temp;
        temp=temp->next;
    }
    prev->next=temp->next;
    delete temp;

}

void searchRecursive(node* head, int val){
    while(head->data!=val && head!=NULL){
        head=head->next;
        searchRecursive(head, val);
    }
    if(head!=NULL){
        cout<<"Not Found"<<'\n';
        return;
    }
    cout<<"Found"<<'\n';
    return;
}

bool serachIerative(node* head, int val){
    while(head!=NULL){
        if(head->data==val){
            return true;
        }
        head=head->next;
    }
    return false;
}


void buildList(node* &head){
int val; cin>>val;
while(val!=-1){
    insertAtTail(head,val);
    cin>>val;
    }
}


int main(){
    node* head=NULL;
    buildList(head);
    print(head);
}
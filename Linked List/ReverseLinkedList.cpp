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

node* reverseLL(node* head){
    node* cur=head;
    node* prev=NULL;
    node* n;
    while(cur!=NULL){
        n=cur->next;
        cur->next=prev;
        prev=cur;
        cur=n;
        
    }
    return prev;
}

node* reverseLLRec(node* head){
    //base case
    if(head==NULL || head->next==NULL){
        return;
    }
}

int main(){
    node* head=NULL;
}
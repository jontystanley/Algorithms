#include<bits/stdc++.h>
using namespace std;

void transfer(stack<char>&s,stack<char>&rev,int dec){
    for(int i=0;i<dec;i++){
        rev.push(s.top());
        s.pop();
    }
}


void insertAtBottom(stack<char>&s,char t){
    if(s.empty()){
        s.push(t);
        return;
    }
    char u=s.top();
    s.pop();
    insertAtBottom(s,t);
    s.push(u);
}

void reverseStackRec(stack<char>&s){
    if(s.empty()) return;
    char t=s.top();
    s.pop();
    reverseStackRec(s);
    insertAtBottom(s,t);
}

void reverseStack(stack<char>&s){
    int n=s.size();
    if(s.empty()){
        return;
    }
    stack<char>rev;
    for(int i=0;i<n;i++){
        char t=s.top();
        s.pop();
        transfer(s,rev,n-i-1);
        s.push(t);
        transfer(rev,s,n-i-1);
    }
}

int main(){
    stack<char>s;
    for(int i=97;i<101;i++){
        s.push(i);
    }
    reverseStackRec(s);

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}
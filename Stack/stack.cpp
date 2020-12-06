#include<bits/stdc++.h>
using namespace std;

template<typename T>
class Stack{
    private:
    vector<T>v;
    public:
    void push( T data){
        v.push_back(data);
    }

    bool isEmpty(){
        return (v.size()==0);
    }

    void pop(){
        if(!isEmpty()){
            v.pop_back();
        }
        
    }

    T top(){
      return v.back();  
    }
};

int main(){
    Stack<char>s;
    for(int i=65;i<90;i++){
        s.push(i);
    }
    cout<<s.top()<<endl;
    while(!s.isEmpty()){
        cout<<s.top()<<" ";
        s.pop();
    }

}
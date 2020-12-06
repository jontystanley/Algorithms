#include<bits/stdc++.h>
using namespace std;
  
void sequences(char *in, char *out,int i,int j){
    
    //base case
    if(in[i]=='\0'){
        out[j]='\0';
        cout<<out<<endl;
        return;
    }
    //recursive case
    //including the char
    out[j]=in[i];
    sequences(in,out,i+1,j+1);
    //excluding the char
    sequences(in,out,i+1,j);
}


int main(){
    char in[100];
    cin>>in;
    char out[100];
    sequences(in,out,0,0);
}
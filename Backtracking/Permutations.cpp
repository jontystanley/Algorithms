#include<bits/stdc++.h>
using namespace std;

void permute(char* in,int i){
    //base case
    if(in[i]=='\0'){
        cout<<in<<",";
        return;
    }
    //recursive case
    for(int k=i;in[k]!='\0';k++){
        swap(in[k],in[i]);
        permute(in,i+1);
        swap(in[k],in[i]);
    }
}


 
int main(){
char in[100];
cin>>in;
permute(in,0);

}
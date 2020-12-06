#include<bits/stdc++.h>
using namespace std;

char keys[][10]={"","","ABC","DEF","GHI","JKL","MN0","PQRS","TUV","WXYZ"};
void keypadStrings(char *in,char* out,int i,int j){ 
    //base case    
    if(in[i]=='\0'){
        out[j]='\0';
        cout<<out<<endl;
        return;
    }
    //edge case
    if(in[i]=='0' || in[i]=='1'){
        keypadStrings(in,out,i+1,j);
    }

    //recursive case
    int digit=in[i]-'0'; 
    for(int k=0;keys[digit][k]!='\0';k++){
        out[j]=keys[digit][k];
        keypadStrings(in,out,i+1,j+1);
    }
} 


int main(){
 
 char in[100];
 char out[100];
 cin>>in;
 keypadStrings(in,out,0,0);
}
#include<bits/stdc++.h>
using namespace std;


int LCS(string s,string t){
    int s_size=s.size();
    int t_size=t.size();
    vector<vector<int>>matrix(t_size+1,vector<int>(s_size+1,0));
    for(int i=1;i<t_size+1;i++){
        for(int j=1;j<s_size+1;j++){
            if(t[i-1]==s[j-1]){
                matrix[i][j]=1+matrix[i-1][j-1];
            }
            else{
                matrix[i][j]=max(matrix[i-1][j],matrix[i][j-1]);
            }
        }
    }
return matrix[t_size][s_size];
}


 
int main(){
    string a="jsohsnhrhsrty";
    string b="dfesonfjafty";
    cout<<LCS(a,b);
}
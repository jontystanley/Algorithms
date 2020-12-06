#include<bits/stdc++.h>
using namespace std;


int editDistance(string a, string b) {
    int a_size = a.size();
    int b_size = b.size();
    int dp[a_size+1][b_size+1];
    for (int i = 0; i < a_size + 1; i++) {
        dp[i][0]=i;
    }
    for (int j = 0; j < b_size + 1; j++){
        dp[0][j]=j;
        }
    for (int i = 1; i < a_size + 1; i++) {
        for (int j = 1; j < b_size + 1; j++) 
                if(a[i-1]==b[j-1]){
                    dp[i][j]=dp[i-1][j-1];
                }
                else{
                    dp[i][j]=1+min(dp[i-1][j],min(dp[i][j-1],dp[i-1][j-1]));
                }
        }
    return dp[a_size][b_size];
}
 
int main(){
    string a="jsohsnhrhsrty";
    string b="dfesonfjafty";
    cout<<editDistance(a,b);
}
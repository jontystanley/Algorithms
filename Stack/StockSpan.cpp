#include<bits/stdc++.h>
using namespace std;


vector<int> stockSpan(vector<int>& nums){
    int n=nums.size();
    vector<int>ans(n);
    stack<int>s;

    ans[0]=1;
    s.push(0);
    for(int i=1;i<n;i++){
        while(s.size()>0 && nums[i]>=nums[s.top()]){
            s.pop();
        }
        if(s.empty()){
            ans[i]=i+1;
        }
        else{
            ans[i]=i-s.top();
        }
        s.push(i);
    }
    return ans;          
}


void printArray(vector<int> ans){
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}
int main(){
    vector<int>nums={100, 80, 60, 70, 60, 75, 85};
    vector<int>ans=stockSpan(nums);
    printArray(ans);
}
#include<bits/stdc++.h>
using namespace std;
  
 
int main(){
    int n;cin>>n;
    int arr[100000];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;cin>>k;
    deque<int>D(k);
    for(int i=0;i<k;i++){
        while(!D.empty() && arr[i]>arr[D.back()]){
            D.pop_back();
        }
        D.push_back(i);
    }
}
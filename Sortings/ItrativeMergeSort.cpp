#include<bits/stdc++.h>

using namespace std;

void merge(int a[],int l, int mid, int h){
    int i=l, j=mid+1, k=l;
    int b[100];
    while(i<=mid && j<=h){
        if(a[i]<a[j]){
            b[k++]=a[i++];
        }
        else
            b[k++]=a[j++];
    }

    for(;i<=mid;i++){
        b[k++]=a[i];
    }
    for(;j<=h;j++){
        b[k++]=a[j];
    }

    for(i=l;i<=h;i++){
        a[i]=b[i];
    }

}


void mergesort(int a[],int n){

int i,p,l,h,mid;
    for(p=2; p<=n; p=p*2){
        for(i=0; i+p-1<n; i=i+p){
            l=i;
            h=i+p-1;
            mid=(l+h)/2;

            merge(a,l,mid,h);
        }
    }
    if(p/2<n){
        merge(a,0,p/2-1,n-1);
    }
}



int main(){
int a[]={67,54,52,12,89,31,23,2,51,6,13,4,233,35,44,56};
int n=int(sizeof(a)/sizeof(a[0]));
mergesort(a,n);
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}

}
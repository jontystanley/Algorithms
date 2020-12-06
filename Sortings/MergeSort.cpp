#include<bits/stdc++.h>

using namespace std;

void merge(int a[], int l ,int mid, int h){

    int i=l,j=mid+1,k=l;
    int b[100];

    while(i<=mid && j<=h){
        if (a[i]<a[j]){
            b[k++]=a[i++];
        }
        else
        {
            b[k++]=a[j++];
        }
    }

    for(;i<=mid;i++){
        b[k++]=a[i];
    }
    for (; j <= h; j++)
    {
        b[k++]=a[j];
    }
     for(int i=l; i<=h;i++){
         a[i]=b[i];
     }

}


void mergesort(int a[], int l , int h ){

    if(l<h){
        int mid=(l+h)/2;
        mergesort(a,l,mid);
        mergesort(a,mid+1,h);
        merge(a,l,mid,h);
    }

}





int main(){
    int a[]={56,34,1,34,6,7,88,6,443,431,21};
    int n= sizeof(a)/sizeof(a[0]);
    mergesort(a,0,n-1);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
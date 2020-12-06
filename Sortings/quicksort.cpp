#include<bits/stdc++.h>

using namespace std;


void swap(int* a, int* b){
    int t=*a;
    *a=*b;
    *b=t;
}

int part(int A[], int p, int r){
    int x=A[r];
    int i=p-1;
    for (int j=p;j<r;j++){
        if(A[j]<=x){
            i=i+1;
            swap(&A[i],&A[j]);
        }
    }
    swap(&A[i+1],&A[r]);
    return (i+1);
}

void quicksort(int A[], int p, int r){
    if (p<r){
        int q = part(A,p,r);
        quicksort(A,p,q-1);
        quicksort(A,q+1,r);
    }
}

void printArray(int A[]){
    for (int i=0;i<8; i++){
        cout<<A[i]<<" ";
    }

}


int main(){
    int A[8]={12,23,34,78,45,21,1,3};
    quicksort(A,0,7);
    cout<<"Sorted Array:"<<endl;
    printArray(A);

    
}




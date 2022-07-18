#include<iostream>
#include<bits/stdc++.h>
#include<ctime>
using namespace std;

void merge(vector<int>&a,vector<int>&b, vector<int>&c,int p,int q){
    int i=0,j=0,k=0;
    while(i<p && j<q){
        if(b[i]<c[j])
            a[k++]=b[i++];
        else
            a[k++]=c[j++];
    }
    if(i==p)
        for(int l=j;l<q;l++)
            a[k++]=c[l];
    else
        for(int l=i;l<p;l++)
            a[k++]=b[l];
}

void mergesortalgorithm(vector<int>&a,int n){
    if(n>1){
      
          vector<int>b(n/2);
            vector<int>c(n/2);
        for(int i=0;i<n/2;i++)
            b[i]=a[i];
        for(int i=0,j=n/2;j<n;i++,j++)
            c[i]=a[j];
         mergesortalgorithm(b,n/2);
         
         mergesortalgorithm(c,n-n/2);
         
         merge(a,b,c,n/2,n-n/2);
        
    }
}

int main(){
    int n;
    cout<<"enter the number of elments->";
    cin>>n;
  
    vector<int>a(n);
    cout<<"enter elements of the array->";
    for(int i=0;i<n;i++)
        cin>>a[i];
    clock_t start=clock();
     mergesortalgorithm(a,n);
    cout<<"sorted array is->";
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl<<"Time taken by the algorithm is->"<<(clock()-start)<<"clock cycles"<<endl;
}

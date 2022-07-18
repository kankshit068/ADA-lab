#include<iostream>
#include<ctime>
#include<bits/stdc++.h>
using namespace std;

int partition(int a[],int l,int r){
    int p=a[l],s=l;
    for(int i=l+1;i<r;i++)
        if(a[i]<p){
            s++;
            swap(a[s],a[i]);
        }
    swap(a[l],a[s]);
    return s;
}

void quicksortalgorithm(int a[],int l,int r){
    if(l<r){
        int s=partition(a,l,r);
        quicksortalgorithm(a,l,s);
        quicksortalgorithm(a,s+1,r);
    }
}

int main(){
    int n;
    cout<<"enter the value of n->";
    cin>>n;
    int a[n];
    cout<<"enter elements of the array->";
    for(int i=0;i<n;i++)
        cin>>a[i];
    clock_t start=clock();
    quick_sort(a,0,n);
    cout<<"sorted array is-> ";
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl<<"Time taken by the program is->"<<(clock()-start)<<"clock cycles"<<endl;
}

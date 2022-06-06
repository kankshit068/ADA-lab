#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>
#include<time.h>

using namespace std;

void delay(){
    
    for(int i=0;i<10000;i++){
        for(int j=0;j<100;j++){
        for(int k=0;k<100;k++);
    }}
}


int linear(int target,vector<int> &arr){
    
    int flag=0;
    int n=arr.size();
    time_t st,ed;
    
    st=time(NULL);
    
    for(int i=0;i<n;i++){
        
        

        
        if(arr[i]==target){
            flag=i;
            break;
        }
        
        delay();
    }
    
    ed=time(NULL);
    
    printf("time taken is is %f",difftime(ed,st));
    cout<<endl;
    
   return flag; 
}

int main()
{   
    int n,target;
    cin>>n;
    vector<int>j(n);
    
    for(int i=0;i<n;i++)cin>>j[i];
    
    cout<<"enter the number which you wanna serach"<<endl;
    
    cin>>target;
    
    int k=linear(target,j);
    
     if(k==0)
        cout<<"Element is not present"<<endl;
    else
        cout<<"the target elemet"<<target<<"is present at an index"<<k;
    

    return 0;
    }

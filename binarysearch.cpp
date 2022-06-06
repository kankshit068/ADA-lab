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


int binary(int target , vector<int>&j){
    
  int mid;
  int left=0;
  int right=j.size()-1;
  int flag=0;
   time_t st,ed;
   st=time(NULL);
  while(left<=right){
      
      mid=(left+right)/2;
      
      if(target<j[mid]){
          right=mid-1;
          
      }
      else if(target>j[mid]){
          left=mid+1;
          
      }
      else if(target==j[mid]) {
          
          flag=mid;
          break;
      }
      
      delay();
      
      
  }
     ed=time(NULL);
    
     printf("time taken is is %f",difftime(ed,st));
   return flag; 
    
}

int main()
{
    int n;
    cin>>n;
    
    vector<int>j(n);
    
    for(int i=0;i<n;i++){
        
        j[i]=i;
    }
    int target;
    cout<<"enter the target"<<endl;
    cin>>target;
    
    int k=binary(target,j);
    
    if(k==0)cout<<"element not found"<<endl;
    else cout<<"elemenet found at an indez "<<k<<endl; 

    return 0;
}

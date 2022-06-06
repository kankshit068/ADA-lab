#include <stdio.h>
#include<bits/stdc++.h>

using namespace std;

int gcd(int a,int b){
    
    if(a==0)
    return b;
    
    if(b==0)
    return a;
    
    
    if(a==b)
    return a;
    
    if(a>b)gcd(a-b,b);
    
    else if(a<b)gcd(a,b-a);
    
}

int main()
{
   int x,y;
   cout<<"enter the two numbers"<<endl;
   cin>>x>>y;
   
   cout<<gcd(x,y);

    return 0;
}

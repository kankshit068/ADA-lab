#include <iostream>
#include<bits/stdc++.h>

using namespace std;

void tower(int n,char from_rod,char to_rod,char aux_rod){
    
    if(n==0)
    return;
    tower(n-1,from_rod,aux_rod,to_rod);
    cout<<"move disk"<<n<<"from rod"<<from_rod<<"to_rod"<<to_rod<<endl;
    tower(n-1,aux_rod,to_rod,from_rod);
}

int main()
{
    f disc"<<endl;
    cin>>k;
    int k;
    cout<<"enter the number o
    tower(k,'A','C','B');

    return 0;
}

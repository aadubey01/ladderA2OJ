#include<iostream>
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

int main(){
    int n,vect_x=0,vect_y=0,vect_z=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int x,y,z;
        cin>>x>>y>>z;
        vect_x=vect_x+x;
        vect_y=vect_y+y;
        vect_z=vect_z+z;
    }
    if(vect_x== 0 && vect_y==0 && vect_z==0)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;

}
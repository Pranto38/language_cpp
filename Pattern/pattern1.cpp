/*
*
* *
* * *
* * * *
* * * * *
* * * *
* * *
* *
*
*/

#include<iostream>
using namespace std;
int main(){
    int n,row,col;
    cout<<"Enter the value of n: ";cin>>n;
    for(row=1; row<=n; row++){
        for(col=1; col<=row; col++){
            cout<<"*"<<" ";
        }
    cout<<"\n";
    }
    for(row=n-1;row>=1;row--){
        for(col=1; col<=row; col++){
            cout<<"*"<<" ";
        }
        cout<<"\n";
    }
    return 0;
}


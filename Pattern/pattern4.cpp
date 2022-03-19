/*   
    *
   * *
  *   *
 *     *
*********
*/

#include<iostream>
using namespace std;
int main(){
    int n,row,col;
    cout<<"Enter the value of n: ";cin>>n;

    for(row=1; row<=n; row++){
        for(col=1; col<=(2*n-1) ; col++){
                if(row==n || row+col==n+1|| col-row==n-1){
                    cout<<"*";
                }
                else{
                       cout<<" ";
                }
    }
    cout<<"\n";
    }

    return 0;
}


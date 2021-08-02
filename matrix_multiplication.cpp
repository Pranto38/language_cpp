#include <iostream>
using namespace std;
int main() {
    cout << "Clion v2021.1" << endl;
    int p,q,r,sum=0,A[10][10],B[10][10],C[10][10];
    //Order of matrix A= p*q & order of matrix B=q*r
    cout<< "Enter the dimensions p, q, r of matrix A & B :\n";
    cout<<"p: ";cin >> p;
    cout<<"q: ";cin >> q;
    cout<<"r: ";cin >> r;
    //Matrix A
    cout<<"Enter the value for matrix A :\n";
    for(int row=0; row<p; row++){
        for(int col=0; col<q; col++){
            cout<< "Enter the value of A["<<row+1<<","<<col+1<<"] : ";
            cin>> A[row][col];
        }
    }
    //Matrix B
    cout<<"Enter the value for matrix B :\n";
    for(int row=0; row<q; row++){
        for(int col=0; col<r; col++){
            cout<< "Enter the value of B["<<row+1<<","<<col+1<<"] : ";
            cin>> B[row][col];
        }
    }
    // Multiplication of Matrix A & B
    for(int row=0; row<p;row++)  {
        for(int col=0; col<r; col++){
            for(int i=0; i<q; i++){
                sum=sum+ A[row][i]*B[i][col];
            }
            C[row][col]=sum;
            sum=0;
        }
    }
    //Matrix C
    cout<<"Printing the result for matrix C=A*B :\n";
    for(int row=0; row<p; row++){
        cout<<"\n";
        for(int col=0; col<r; col++){
            cout<< C[row][col]<<"\t";
        }
    }

    return 0;
}

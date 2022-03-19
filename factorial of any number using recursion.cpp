#include<iostream>
using namespace std;
int fact(int n){
 if(n == 1 || n == 0)
 return 1;
 else
 return n*fact(n-1);
}
int main(){
 int num, factorial;
 cout<<"Enter a number : ";
 cin>>num;
 factorial = fact(num);
 cout<<"Factorial of "<<num<<" is "<<factorial;
 return 0;
}

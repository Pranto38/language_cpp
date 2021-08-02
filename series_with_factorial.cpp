#include <iostream>
#include <cmath>

using namespace std;
int main() {
    int n,x,fact=1;
    double sum=1;
    cout<<fixed<<showpoint;
    cout<< "Enter the value of x = ";cin>>x;
    cout<< "Enter the value of n = ";cin>>n;
    for(int i=1; i<=n; i++){

            fact=fact*i;
            sum=sum+ ((pow(x,i))/fact);

    }
    cout<< sum;

    return 0;
}

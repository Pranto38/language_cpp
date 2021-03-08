#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Enter the number: ";
    cin>> num;
  
    //for loop
    for(int i=1; i<=10; i++)
    {
        cout<<num<<" x "<<i<<" = "<<(num*i)<<endl;
    }
  
    //while loop
    int i=1;
    while(i<=10)
    {
        cout<<num<<" x "<<i<<" = "<<(num*i)<<endl;
        i++;
    }
  
    //do while loop
    int j=1;
    do
    {
        cout<<num<<" x "<<j<<" = "<<(num*j)<<endl;
        j++;
    }
    while(j<=10);
  
    return 0;
}

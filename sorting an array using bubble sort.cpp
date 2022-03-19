#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter total numbers you want to input:";
    cin>>n;
    int numbers[n],temp,i,j;
    cout<<"Enter the numbers: \n";
    for(i=0; i<n; i++){
        cin >> numbers[i];
    }
    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(numbers[j] < numbers[i]) {
                temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }
    cout << "\n Sorted array: ";
    for(i=0; i<n; i++){
        cout << numbers[i] <<" ";
    }
    return 0;
}

#include <iostream>

using namespace std;
int main()
{
    char ch;
    cin>>ch;
    char x=tolower(ch);
    cout<<x;
    switch(x)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        cout<<"v";
        break;
    default:
        cout<<"c";
    }

    return 0;
}

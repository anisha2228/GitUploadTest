#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the number ";

    cin >> a >> b >> c;

    if(a>b) {
        if(a>c)
        cout<<"Largest no. " << a;
        else
            cout<<"Largest no. " << c;
    }

    if(b>c)
        cout<<"Largest no. " << b;
    else
        cout<<"Largest no. " << c;

    return 0;
}

#include <iostream>
using namespace std;
int main()
{

    int a,b,c;
    cout<<"enter the number";
    cin >> a >> b >> c;
    if (a>b){

        if (a>c)
        cout<<"largest no.:-" <<a;
    else

        cout<<"largest no.:-" <<c;
    }
    else
    {

    if(b>c)
        cout<<"largest no.:-" <<b;
    else
        cout<<"greatest no. :-" <<c;
    }
    return 0;
}

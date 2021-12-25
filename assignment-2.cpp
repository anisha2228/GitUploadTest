#include <iostream>

using namespace std;

int main()
{
    float celsius,fahrenheit;
    cout<<endl<<endl<<endl;
    cout<<"enter the temperature in celsius";
    cin>>celsius;
    fahrenheit=(celsius*9.0)/5.0 + 32;
    cout<<"temperature in celsius :-"<<celsius<<endl;
    cout<<"temperature in fahrenheit :-"<<fahrenheit<<endl;
    return 0;
}

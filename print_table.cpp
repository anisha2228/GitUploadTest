#include <iostream>
using namespace std;


int main()
{
    int a;
    cin >> a;

    int i=1;

    while (i <=200) {

        cout << a*i << " ";
        if ((i%2 == 0) && (i%5 == 0)) {
            cout << endl;
        }

        i++;
    }



    return 0;
}


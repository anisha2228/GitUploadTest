#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


int main() {

    vector<int> arr;
    int n;

    cout << "Enter how many numbers you want to sort: \n";
    cin >> n;
    for (int i=0; i<n; i++) {
        int x;
        cin >> x;
        arr.push_back(x);
    }


    sort(arr.begin(), arr.end());

    cout << "Output array: \n";

    for (auto x: arr) {
        cout << x << " ";
    }




    return 0;
}


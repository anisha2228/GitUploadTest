#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int arr[200],ip,i = 0,count = 0;
	cin>>ip;
	while(i < 200)
	{
	    arr[i++] = i * ip;
	}
	for(int j = 0; j < 200; j++)
	{
	    cout<<arr[j]<<" ";
	    if(++count == 10)
	    {
	        cout<<endl;
	        count = 0;
	    }
	}
}

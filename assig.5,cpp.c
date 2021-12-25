#include <iostream>
using namespace std;

int main() {
	// your code goes here
	char c;
	do
	{
	    float a,b;
	    char op;
	    cout<<"Enter the First Number , Operator and Second Number : ";
	    cin>>a>>op>>b;
	    switch(op)
	    {
	        case '+' :
	        cout<<a+b;
	        break;
	        case '-' :
	        cout<<a-b;
	        break;
	        case '/' :
	        cout<<a/b;
	        break;
	        case '*' :
	        cout<<a*b;
	        break;
	        default :
	        cout<<"Something went wrong check ur input :)";
	    }
	    cout<<endl<<"Do ya wanna continue? (y/n) : ";
	    cin>>c;
	}while(c != 'n');

}

#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	float a,b,c;
    char o;
	
	cout<<"Enter a"<<endl;
	cin>>a;
	cout<<"Enter b";
	cin>>b;
	
	cout<<"Press your option no\n1.addition\n2.subtraction\n3.multiplication\n4.division\n";
	cin>>o;
	
	switch(o){
		case '1': 
			c=a+b;
			break;
		case '2':
			c=a-b;
			break;
		case '3':
			c=a*b;
			break;
		case '4':
			c=a/b;
			break;
		default:
			cout<<"Invalid option entered";
			exit(1);
			break;
	}
	cout<<"result is"<<c;
	return 0;
}

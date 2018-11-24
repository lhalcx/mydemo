#include <iostream>

using namespace std;

int main(){
	char a = -125;
	for( int i =0;i < 255;i++){
		int ivalue = a;
		cout << ivalue << " char value is :" << a << endl;
		a = a+1;	
	}
	
	return 0;
} 

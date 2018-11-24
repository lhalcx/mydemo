#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int i = 16, j = 17;
	cout << hex;
	cout << setw(5) << i << setw(15) << j << endl;
	
	cout << dec;
	cout << setw(5) << i << setw(15) << j << endl;
	return 0;
}

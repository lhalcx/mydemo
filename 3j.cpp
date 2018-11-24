#include <iostream>
using namespace std;
int num[10];
void div(int x){
	while(x > 0){
		num[x%10]++;
		x = x/10;
	}	
}
int main(){
	int test = 789;
	for(int i = 0; i < 10;i++){
		num[i] = 0;
		
		
	}
	div(test);
	//div(test);
	for(int i = 1; i < 10;i++){
		cout << '\t' << num[i];
	}
	return 0;
	
	
	
}

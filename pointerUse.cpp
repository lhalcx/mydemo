#include<iostream>
using namespace std;
void add(int *x,int *y){
	(*x)++;
	(*y)++;
}
int main(){
	int x = 5;
	
	int y = 6;
	
	add(&x,&y);
	
	cout << "x 的值：" << x << endl;
	
	cout << "y 的值：" << y << endl;
	
	return 0;
	
}

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
	
	cout << "x ��ֵ��" << x << endl;
	
	cout << "y ��ֵ��" << y << endl;
	
	return 0;
	
}

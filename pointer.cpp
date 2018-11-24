#include<iostream>
using namespace std;
int main(){
	int a = 10;
	
	cout <<"按照a变量的大名读取值：" << a << endl;
	
	cout <<"读取a变量的小名即地址：" << &a << endl;
	
	cout <<"按照小名读取a变量的值："<< *(&a) << endl; 
	

	
	
	
	int b = 100;
	
	cout <<"按照b变量的大名读取值：" << b << endl;
	
	cout <<"读取b变量的小名即地址：" << &b << endl;
	
	cout <<"按照小名读取b变量的值："<< *(&b) << endl; 
	
	
	
	int *p;
	
	p = &a;
	
	cout <<"指针p变量的值：" << p << endl;
		cout <<"指针p变量的值：" << *p << endl;
	
	
//	cout << "读取指针变量的值：" << *p << endl;

/*
	
	cout << "改变指针变量的值：" << endl;
	
	cout <<"指针变量的值：" << p << endl;
	
	cout << "读取指针变量的值：" << *p << endl;
	
	 */
	
	//float *c = &a; 
	
	return 0;
}

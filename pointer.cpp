#include<iostream>
using namespace std;
int main(){
	int a = 10;
	
	cout <<"����a�����Ĵ�����ȡֵ��" << a << endl;
	
	cout <<"��ȡa������С������ַ��" << &a << endl;
	
	cout <<"����С����ȡa������ֵ��"<< *(&a) << endl; 
	

	
	
	
	int b = 100;
	
	cout <<"����b�����Ĵ�����ȡֵ��" << b << endl;
	
	cout <<"��ȡb������С������ַ��" << &b << endl;
	
	cout <<"����С����ȡb������ֵ��"<< *(&b) << endl; 
	
	
	
	int *p;
	
	p = &a;
	
	cout <<"ָ��p������ֵ��" << p << endl;
		cout <<"ָ��p������ֵ��" << *p << endl;
	
	
//	cout << "��ȡָ�������ֵ��" << *p << endl;

/*
	
	cout << "�ı�ָ�������ֵ��" << endl;
	
	cout <<"ָ�������ֵ��" << p << endl;
	
	cout << "��ȡָ�������ֵ��" << *p << endl;
	
	 */
	
	//float *c = &a; 
	
	return 0;
}

#include <iostream>
#include <string>
using namespace std;
int main(){
/****************************
1. ��ȡ�Ӵ�

       s.substr(pos, n)    ��ȡs�д�pos��ʼ������0����n���ַ����Ӵ���������

       s.substr(pos)        ��ȡs�дӴ�pos��ʼ������0����ĩβ�������ַ����Ӵ���������
2. �滻�Ӵ�
       s.replace(pos, n, s1)    ��s1�滻s�д�pos��ʼ������0����n���ַ����Ӵ�
3. �����Ӵ�

       s.find(s1)         ����s�е�һ�γ���s1��λ�ã������أ�����0��

       s.rfind(s1)        ����s�����γ���s1��λ�ã������أ�����0��

       s.find_first_of(s1)       ������s1������һ���ַ���s�е�һ�γ��ֵ�λ�ã������أ�����0��

       s.find_last_of(s1)       ������s1������һ���ַ���s�����һ�γ��ֵ�λ�ã������أ�����0��

       s.fin_first_not_of(s1)         ����s�е�һ��������s1�е��ַ���λ�ã������أ�����0��

       s.fin_last_not_of(s1)         ����s�����һ��������s1�е��ַ���λ�ã������أ�����0��
**********************************/    
	string s1 = "hello c++";
	cout << "s1���ַ���С" << s1.substr(6) << endl;
	
	/***
	cout << "s1���ַ�����" << s1.length() << endl;
	cout << "s1�ַ����Ŀ�ʼ�ַ�" << s1.substr(s1.find("l",0)); 
	bool is_exit = true;
	cout << is_exit << endl;
	****/
	return 0;
} 

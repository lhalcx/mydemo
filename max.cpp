#include <iostream> // ����������������ļ�

using namespace std;// ʹ�ñ�׼�����ռ�

int max(int x,int y){
	int m;
	if(x > y){
		m = x;
	}else{
		m = y;
	}
	return m;
}

int main(){// ����������������

	int a, b;  // ���������������������Σ�
	cout << "please input a variable " << endl;
	cin >> a ; //����a��ֵ
	cout << "please input b variable " << endl;
	cin  >> b; //����b��ֵ
	int m = max(a,b);
	cout << a << " �� "<< b <<"������� " << m << endl; //������ֵ 

	return 0; // ������������
	
}

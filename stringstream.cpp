
#include<iostream>
#include <sstream> 
using namespace std;
int main(){
	string test = "-123 9.87 welcome to, 989, test!";
	istringstream iss;//istringstream�ṩ�� string �Ĺ���
	iss.str(test);//�� string ���͵� test ���Ƹ� iss������ void 
	string s;
	cout << "���տո��ȡ�ַ���:" << endl;
	while (iss >> s){
		cout << s << endl;//���ո��ȡstring
	}
	
	cout << "*********************" << endl;
 
	istringstream strm(test); 
	//�����洢 test �ĸ����� stringstream ����
	int i;
	float f;
	char c;
	char buff[1024];
	strm >> i;
	cout <<"��ȡint���ͣ�"<< i << endl;
	strm >> f;
	cout <<"��ȡfloat���ͣ�"<<f << endl;
	strm >> c;
	cout <<"��ȡchar���ͣ�"<< c << endl;
	strm >> buff;
	cout <<"��ȡbuffer���ͣ�"<< buff << endl;
	strm.ignore(100, ',');
	
	int j;
	strm >> j;
	cout <<"���ԡ�������ȡint���ͣ�"<< j << endl;
 
	system("pause");
	
	return 0;
	
}


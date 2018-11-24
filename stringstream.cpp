
#include<iostream>
#include <sstream> 
using namespace std;
int main(){
	string test = "-123 9.87 welcome to, 989, test!";
	istringstream iss;//istringstream提供读 string 的功能
	iss.str(test);//将 string 类型的 test 复制给 iss，返回 void 
	string s;
	cout << "按照空格读取字符串:" << endl;
	while (iss >> s){
		cout << s << endl;//按空格读取string
	}
	
	cout << "*********************" << endl;
 
	istringstream strm(test); 
	//创建存储 test 的副本的 stringstream 对象
	int i;
	float f;
	char c;
	char buff[1024];
	strm >> i;
	cout <<"读取int类型："<< i << endl;
	strm >> f;
	cout <<"读取float类型："<<f << endl;
	strm >> c;
	cout <<"读取char类型："<< c << endl;
	strm >> buff;
	cout <<"读取buffer类型："<< buff << endl;
	strm.ignore(100, ',');
	
	int j;
	strm >> j;
	cout <<"忽略‘，’读取int类型："<< j << endl;
 
	system("pause");
	
	return 0;
	
}


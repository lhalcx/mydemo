#include <iostream>
//#include <string>
using namespace std;

int main(){
	string a = "hello word";
	char name[8];
	cout << "请输入名字："<<endl;
	//int i = 0;
	cin.get(name,8,'#');
	//wile(cin.get(name[i++]) !='\n') 
	//cin >> test;
	cout << "输入的name是：" << name << endl;
	
	cout << "第七个字符是：" << name[7] ;
	

	//cout << a;
	return 0;
} 

#include <iostream> // 引入输入输出流库文件

using namespace std;// 使用标准命名空间

int max(int x,int y){
	int m;
	if(x > y){
		m = x;
	}else{
		m = y;
	}
	return m;
}

int main(){// 主函数，程序的入口

	int a, b;  // 定义两个整数变量（整形）
	cout << "please input a variable " << endl;
	cin >> a ; //输入a的值
	cout << "please input b variable " << endl;
	cin  >> b; //输入b的值
	int m = max(a,b);
	cout << a << " 和 "<< b <<"最大数是 " << m << endl; //输出最大值 

	return 0; // 程序正常结束
	
}

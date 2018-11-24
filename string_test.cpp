#include <iostream>
#include <string>
using namespace std;
int main(){
/****************************
1. 截取子串

       s.substr(pos, n)    截取s中从pos开始（包括0）的n个字符的子串，并返回

       s.substr(pos)        截取s中从从pos开始（包括0）到末尾的所有字符的子串，并返回
2. 替换子串
       s.replace(pos, n, s1)    用s1替换s中从pos开始（包括0）的n个字符的子串
3. 查找子串

       s.find(s1)         查找s中第一次出现s1的位置，并返回（包括0）

       s.rfind(s1)        查找s中最后次出现s1的位置，并返回（包括0）

       s.find_first_of(s1)       查找在s1中任意一个字符在s中第一次出现的位置，并返回（包括0）

       s.find_last_of(s1)       查找在s1中任意一个字符在s中最后一次出现的位置，并返回（包括0）

       s.fin_first_not_of(s1)         查找s中第一个不属于s1中的字符的位置，并返回（包括0）

       s.fin_last_not_of(s1)         查找s中最后一个不属于s1中的字符的位置，并返回（包括0）
**********************************/    
	string s1 = "hello c++";
	cout << "s1的字符大小" << s1.substr(6) << endl;
	
	/***
	cout << "s1的字符长度" << s1.length() << endl;
	cout << "s1字符串的开始字符" << s1.substr(s1.find("l",0)); 
	bool is_exit = true;
	cout << is_exit << endl;
	****/
	return 0;
} 

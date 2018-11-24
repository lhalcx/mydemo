#include <iostream>
using namespace std;
struct student{
	int num;
	char name[20];
};
void changeName(struct student student1){
	student1.num = 20;
	cout << "in function of changeName" << student1.num << endl;
}
int main(){
	struct student student22;
	student22.num = 220;
	changeName(student22);
	cout << student22.num << endl;
	return 0;
} 



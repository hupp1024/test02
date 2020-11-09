#include "iostream"
using namespace std;
struct Teacher{
	char name[4];
	int age;
};


void main(){
	int x = 20;
	//常引用的初始化(1)：变量初始化常引用
	const int& y = x;//本质：const int const *y = &x;
	//y = 100;//报错-->原因：只能读“y”，不能“写”y，使得y具有“只读”属性

	
	const int a = 40;//符号表机制
	//int& b = 40;//报错-->原因：本质是：int const *b = &41,而“字面量”41没有内存地址，
	
	//常引用的初始化(2)：“字面量”初始化常引用
	const int& m = 40;//成功-->原因：规定！！！

	system("pause");
	return;
}
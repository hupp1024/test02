#include "iostream"
using namespace std;
 
 
//返回引用,返回的变量 必须是 ”全局变量“或“静态变量”才能够初始化主调函数的“引用变量“
//返回引用,返回的变量 不必是 ”全局变量“或“静态变量”才能够初始化主调函数的“普通变量“
int& getAA()
{
	static int a = 10;
	return a;
}
 
void main(){
 
    //当引用做“右值”初始化“变量”和“引用”的两种本质的想象：
	int a2 = getAA();//本质：int a2 = *a;当初始化普通变量时C++编译器自动进行“*a”操作
	int &a3 = getAA();//本质：int* const a3 = &a;当初始化引用变量时C++编译器自动进行“&a”操作
 
	printf("%d\n", a2);
	printf("%d\n", a3);//本质：printf("%d\n",*a3)
	system("pause");
	return;
}
 

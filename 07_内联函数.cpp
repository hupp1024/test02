#include "iostream"
using namespace std;

struct Teacher{
	char name[4];
	int age;
};
inline int myfunc(int a, int b){
	return a < b ? a : b;
}
 /*
 1、声明和定义不可分离
 2、调用时直接替换调用语句
 3、调用时没有压栈、跳转、返回的步骤
 4、定义的内联函数编译器不一定将其视为内联函数，有可能将其视为普通函数
 5、未定义未内联函数的情况下，编译器也可能将其视为内联函数（当有循环和过多的判断语句时）
 6、内联函数与普通的带参宏定义的区别是有编译过程，而不是机械地文本替换
 */
void main(){
	
	myfunc(1, 2);
	system("pause");
	return;
}
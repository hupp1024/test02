#include "iostream"
using namespace std;

//带默认参数的函数
void myfunc1(int a = 0, int b = 1){
	printf("%d\n%d\n", a, b);
}
//非默认参数必须在默认参数之前
void myfunc2(int x ,int a = 0, int b = 1){
	printf("%d\n%d\n%d\n", x, a, b);
}
//函数参数带占位符且没有默认参数时
void myfunc3(int a, int b, int){
	printf("%d\n%d\n", a, b);
}
//函数参数带占位符且有默认参数时
void myfunc4(int a, int b, int = 0){
	printf("%d\n%d\n", a, b);
}
void main(){
	
	myfunc1();
	
	myfunc2(2);
	
	myfunc3(1, 2, 3);//调用函数参数带占位符且没有默认参数时，形参个数必须与定义时一致
	
	myfunc4(1, 2, 3);
	myfunc4(1, 2);
	
	system("pause");
	return;
}
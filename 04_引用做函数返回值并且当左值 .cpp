#include "iostream"
using namespace std;
 
int& getAA()
{
	static int a = 10;
	a++;
	printf("getAA a:%d\n", a);
	return a;
}

void main(){
 
	//当函数引用做“左值”可以对它进行赋值：
	getAA()= 100;//本质：*a = 100;
	getAA();
	system("pause");
	return;
}  
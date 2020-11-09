#define _CRT_SECURE_NO_WARNINGS
#include "iostream"
#include "classArray.h"
using namespace std;
 
class A{
public:
	friend void modifyA(A* pA, int _a);//友元函数的申明与pubulic、private无关
	A(int a, int b){
		this->a = a;
		this->b = b;
	}
	int getA()
	{
		return this->a;
	}
private:
	int a;
	int b;
};

void modifyA(A* pA, int _a){
	pA->a = _a;
}


void main(){

	A a1(1, 2);
	cout << a1.getA() << endl;
	modifyA(&a1, 100);//通过友元函数修改类的私有属性
	cout << a1.getA() << endl;

	system("pause");
	return;
}

 
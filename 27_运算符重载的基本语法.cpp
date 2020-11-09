#define _CRT_SECURE_NO_WARNINGS
#include "iostream"
#include "classArray.h"
using namespace std;
 
class Complex{
public:
	int a;
	int b;
	int c;
public:
	Complex(int a = 0, int b = 0){
		this->a = a;
		this->b = b;
	}
	void printCom(){
		cout << a << "+" << b << "i" << endl;
	}
};
//全局函数实现
Complex myAdd(Complex& c1, Complex& c2){

	Complex tmp(c1.a + c2.a, c1.b + c2.b);
	return tmp;
}
//运算符重载实现
Complex operator+(Complex& c1, Complex& c2){

	Complex tmp(c1.a + c2.a, c1.b + c2.b);
	return tmp;
}

void main(){
	


	Complex c1(1, 2), c2(3, 4);

	//全局函数实现
	Complex c3 = myAdd(c1, c2);
	c3.printCom();

	
	//运算符重载，调用方式1 
	Complex c4 = operator+(c1,c2);
	c4.printCom();

	//运算符重载，调用方式2（C++编译器简化的格式）
	Complex c5 = c1 + c2;
	c5.printCom();



	system("pause");
	return;
}

 
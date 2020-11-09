#define _CRT_SECURE_NO_WARNINGS
#include "iostream"
#include "classArray.h"
using namespace std;
 
class Complex{
public:
	int a;
	int b;
public:
	friend Complex operator+(Complex& c1, Complex& c2);
	Complex(int a = 0, int b = 0){
		this->a = a;
		this->b = b;
	}
	void printCom(){
		cout << a << "+" << b << "i" << endl;
	}
	//成员函数实现
	Complex operator-(Complex& c){
		Complex tmp(this->a - c.a, this->b-c.b);
		return tmp;
	}
};
//友元函数实现
Complex operator+(Complex& c1, Complex& c2){
	Complex tmp(c1.a+c2.a, c1.b + c2.b);
	return tmp;
}

void main(){
	Complex c1(1, 2), c2(3, 4);
	
	Complex c3 = c1 + c2;
	c3.printCom();

	Complex c4 = c1 - c2;
	c4.printCom();

	system("pause");
	return;
}

 
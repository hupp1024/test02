#define _CRT_SECURE_NO_WARNINGS
#include "iostream"
#include "classArray.h"
using namespace std;
 
class Complex{
public:
	int a;
	int b;
public:
	Complex(int a = 0, int b = 0){
		this->a = a;
		this->b = b;
	}
	void printCom(){
		cout << a << "+" << b << "i" << endl;
	}

	friend	ostream& operator<<(ostream& out, Complex& c);

	 

};
/*
	友元函数实现 "<<"符号的重载，不能使用成员函数实现，
	原因：成元函数的调用方式是："cout.operator<<(c1)"，
	需要在ostream类中添加成员函数"void operator<<(Complex& c)"
	而ostream不开源，故只能使用友元函数
*/
ostream& operator<<(ostream& out, Complex& c){//返回值可以是void也可以是ostream&，后者支持链式编程
	out << c.a << "+" << c.b << "i" << endl;
	return out;
}

void main(){
	Complex c1(1, 2), c2(3, 4);
 
	cout << c1 << endl;
 
	system("pause");
	return;
}

 
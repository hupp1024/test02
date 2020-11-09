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
	Complex operator-(Complex& c){	//成员函数 实现 -
		Complex tmp(this->a - c.a, this->b-c.b);
		return tmp;
	}

	Complex operator+(Complex& c2){//成员函数 实现 +
		Complex tmp(this->a + c2.a, this->b + c2.b);
		return tmp;
	}

	Complex& operator--(){//成员函数实现 前置--
		--this->a;
		--this->b;
		return *this;
	}

	Complex& operator++(){//成员函数实现 前置++
		++this->a;
		++this->b;
		return *this;
	}

	Complex operator--(int){//成员函数实现 后置--
		Complex tmp = *this;
		this->a--;
		this->b--;
		return tmp;
	}

	Complex operator++(int){//成员函数实现 后置++
		Complex tmp = *this;
		this->a++;
		this->b++;
		return tmp;
	}
};



void main(){
	Complex c1(1, 2), c2(3, 4);
	
 	Complex c3 = c1 + c2;
	c3.printCom();

	Complex c4 = c1 - c2;
	c4.printCom();

	++c1;
	c1.printCom();

	--c1;
	c1.printCom();

	c1++;
	c1.printCom();

	c1--;
	c1.printCom();

	system("pause");
	return;
}

 
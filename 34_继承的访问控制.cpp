/*主文件-------------------------------------------------------*/
#define _CRT_SECURE_NO_WARNINGS
#include "iostream"
#include "myString.h"
using namespace std;

class Parent{ 
public:
	int a; 
protected:
	int b; 
private:
	int c; 
};
/*------------------------------------------------*/
class Child_01 : public Parent{//把继承的基类的成员属性保持不变的当作自己的属性，基类的私有属性除外
public:
	// 继承的效果：
	//int a;
private:
	// 继承的效果：
	//int b;
protected:
public:
	void f()
	{
		a = 0;
		b = 0;
		//c = 0;
	}
};
void test01(){ 
	Child_01 x1;
	x1.a = 0; 
	//私有属性不对外公开：
	//x1.b = 0;
}
/*------------------------------------------------*/
class Child_02 : protected Parent{ //把继承的基类的成员属性都当作自己的保护属性，基类的私有属性除外
public:
private:
protected:
	// 继承的效果：
	//int a;
	//int b;
public:
	void f()
	{
		a = 0;
		b = 0;
		//c = 0;
		//此处未编写child02的继承类，若编写了，则其继承类可以访问a和b
	}
};
void test02(){ 
	Child_02 x2;
	//保护属性不对外公开：
	//x2.a = 0;
	//x2.b = 0; 
}
/*------------------------------------------------*/
class Child_03 : private Parent{//把继承的所有属性当作自己私有的属性，基类的私有属性除外
public:
private:
	// 继承的效果：
	//int a;
	//int b;
protected:
public:
	void f()
	{
		a = 0;
		b = 0;
	}
};
void test03(){
	Child_03 x3;
	//私有属性不对外公开：
	//x3.a = 0;
	//x3.b = 0;
}




void main(){

 
 
	cout << "hello" << endl;

	system("pause");
	return;
}


/*主文件-------------------------------------------------------*/
#define _CRT_SECURE_NO_WARNINGS
#include "iostream"
using namespace std;
 
class Object
{
public:
	Object(int a, int b){//有参
		this->a = a;
		this->b = b;
		cout << "object构造函数调用" << "a:"<< a<<" b: "<< b << endl;
	}
	~Object(){
		cout << "object析构函数调用" << endl;
	}
private:
	int a;
	int b;
};

class Parent:public Object{ 
public:

	Parent(char* p):Object(1,2){//有参
		this->myp = p;
		cout << "Parent构造函数调用" << this->myp << endl;
	}
	~Parent(){
		cout << "Parent析构函数调用" << myp << endl;
	}
protected:
	char* myp;
private:
};

class Child :public Parent{
public:
 
	Child(char* p) :Parent("parent"), obj1(3, 4), obj2(5,6){//有参
		this->myp = p;
		cout << "Child构造函数调用" << this->myp << endl;
	}
 
	~Child(){
		cout << "Child析构函数调用" << this->myp  << endl;
	}
protected:
	char* myp;
	Object obj1;//组合对象
	Object obj2;//组合对象
};
 
void test(){
	Child c1("child");
}

void main(){

	/*
		类的关系：
		1、Child以public继承Parent，Parent以public继承Object 
		2、Child中包含类Object类的对象
		构造函数顺序：
			先调用父类构造函数，若父类中还有父类则先调用父类的父类，
			再调用子类中的组合对象的构造函数,最后调用子类构造函数
		析构函数顺序：
			与构造函数顺序相反
	*/
	test();
	cout << "hello" << endl;

	system("pause");
	return;
}


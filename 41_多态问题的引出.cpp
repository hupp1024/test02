/*主文件-------------------------------------------------------*/
#define _CRT_SECURE_NO_WARNINGS
#include "iostream"
using namespace std;
 
class Parent{
public:
	Parent(int a){
		this->a = a;
		cout << "Parent gz:" << a << endl;
	}
	//void print(){ 
	//	cout << "Parent pr:" << a << endl;
	//}
	virtual void print(){//在原类型上添加 virtual关键字，解决“反常”
		cout << "Parent pr:" << a << endl;
	}
protected:
private:
	int a;
};

class Child:public Parent{
public:
 
	Child(int b):Parent(10){
		this->b = b;
		cout << "Child gz:" << b << endl;
	}
	//void print(){
	//	cout << "Child pr:" << b << endl;
	//}
	virtual void print(){//父类中与其同名的函数声明了virtual之后，子类可写可不写
		cout << "Child pr:" << b << endl;
	}
protected:
private:
	int b;
};

void howToPrint(Parent* base){
	base->print();
}

void howToPrint2(Parent& base){
	base.print();
}

void test(){
	Parent* base = NULL;
	Parent p1(20);
	Child c1(30);

	base = &p1;
	base->print();
	base = &c1;
	base->print();//反常：执行的是Parent的print函数 


	Parent& base2 = p1;
	base2.print();
	Parent& base3 = c1;
	base3.print();//反常：执行的是Parent的print函数

	howToPrint(&p1);
	howToPrint(&c1);//反常：执行的是Parent的print函数
	howToPrint2(p1);
	howToPrint2(c1);//反常：执行的是Parent的print函数
}

void main(){
	/*
		多态问题的引出：
			由于继承的兼容性原则，导致当父类和子类中的函数同名时出现上诉反常现象，
		需要实现的功能：
			1）如果是父类指针指向的是父类对象，则调用父类中定义的函数
			2）如果是父类指针指向的是子类对象，则调用子类中定义的函数
		C++编译器提供的机制：
			多态；同样的调用语句（如上诉"base->print()")有多种表现形态
			（而不出现如上诉的“反常”）

	*/
 
	test();
	cout << "hello" << endl << endl << endl << endl << endl;

	system("pause");
	return;
}


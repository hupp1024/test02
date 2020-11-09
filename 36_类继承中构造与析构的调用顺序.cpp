/*主文件-------------------------------------------------------*/
#define _CRT_SECURE_NO_WARNINGS
#include "iostream"
using namespace std;
 
class Parent{ 
public:

	Parent(){//无参
		cout << "父类无参构造函数" << endl;
	}
	Parent(int a, int b){//有参
		this->a = a;
		this->b = b;
		cout << "父类有参构造函数" << endl;
	}
	Parent(const Parent& obj){//拷贝
		cout << "父类拷贝构造函数" << endl;
	}
	~Parent(){
		cout << "父类析构函数" << endl;
	}
	void printP(){
		cout << "Im's father" << endl;
	}
protected:
 
private:
	int a; 
	int b;
};
class Child :public Parent{
public:
	//Child():Parent(1,2){//无参
	//	cout << "子类无参构造函数" << endl;
	//}
	Child(int a, int b, int c):Parent(a, b){//有参
		this->c = c;
		cout << "子类有参构造函数" << endl;
	}
	Child(const Child& obj){//拷贝
		cout << "子类拷贝构造函数" << endl;
	}
	~Child(){
		cout << "子类析构函数" << endl;
	}
	void printC(){
		cout << "Im's son" << endl;
	}

protected:
private:
	int c;
};
 
void test(){
	Child child(1, 2, 3);
}

void main(){

	/*
		构造函数顺序：
			先调用父类构造函数，再调用子类构造函数
		析构函数顺序：
			与构造函数顺序相反
	*/
	test();
	cout << "hello" << endl;

	system("pause");
	return;
}


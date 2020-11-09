///*主文件-------------------------------------------------------*/
//#define _CRT_SECURE_NO_WARNINGS
//#include "iostream"
//using namespace std;
// 
//class Parent
//{
//public:
//	Parent(int a = 0){
//		this->a = a;
//	}
//	 virtual void print(){
//		cout << "Parent" << endl;
//	}
//protected:
//private:
//	int a;
//};
//
//class Child :public Parent
//{
//public:
//	Child(int a = 0, int b = 0):Parent(a){
//		this->b = b;
//	}
//	void print(){
//		cout << "Child" << endl;
//	}
//protected:
//private:
//	int b;
//};
//
//void HowToPlay(Parent* base){
//	base->print();
//}
//
//void test(){
//	Parent p1;
//	Child c1; 
//
//	HowToPlay(&p1);
//	HowToPlay(&c1);
//}
//
//void main(){
//	 
//	test();
//	system("pause");
//	return;
//}
//

/*主文件-------------------------------------------------------*/
#define _CRT_SECURE_NO_WARNINGS
#include "iostream"
using namespace std;
/*
兼容性原则：
1、派生类对象可以当基类对象使用
2、派生类对象可以赋值给基类对象
3、派生类对象可以初始化基类对象
4、基类指针可以指向派生类对象
5、基类引用可以引用派生类对象
*/
class Parent{
public:

	Parent(){//无参构造
		cout << "Parent's construct functiong" << endl;
	}
	Parent(const Parent& obj){//拷贝构造
		cout << "Parent's copy functiong" << endl;
	}
	void printP(){
		cout << "Im's father" << endl;
	}
	int x1;
protected:

private:
	int a;
};
class Child :public Parent{
public:
	void printC(){
		cout << "Im's son" << endl;
	}
	int y1;
protected:
private:
	int c;
};
void howToPrint(Parent* base){
	base->printP();
}
void howToPrint2(Parent& base){
	base.printP();
}
void test(){
	Parent parent;
	parent.printP();
	//基本
	Child child;
	child.printC();
	child.printP();
	//4、基类指针可以指向派生类对象,也即 pParent = &child;
	Parent* pParent = NULL;
	pParent = &child;
	pParent->printP();
	pParent->x1;
	//pParent->y1;//error;
	//4-1、派生类指针与基类指针等效
	howToPrint(&parent);
	howToPrint(&child);
	//5、基类引用可以引用派生类对象
	howToPrint2(parent);
	howToPrint2(child);
	//3、派生类对象可以初始化基类对象
	Parent parent2 = child;//调用基类拷贝构造函数
 

}

void main(){


	test();
	cout << "hello" << endl;

	system("pause");
	return;
}


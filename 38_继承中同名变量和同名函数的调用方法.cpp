/*主文件-------------------------------------------------------*/
#define _CRT_SECURE_NO_WARNINGS
#include "iostream"
using namespace std;
 
class A
{
public:
	A()
	{
	}

	~A()
	{
	}
	int a;
	int b;
public:
	void getAb(){
		cout << "A.b:" << b << endl;
	}
	void get(){
		cout << "A" << endl;
	}
private:

};


class B : public A
{
public:
	B()
	{
	}

	~B()
	{
	}
	int b;
	int c;
	void getBb(){
		cout << "B.b:" << b << endl;
	}
	void get(){
		cout << "B" <<endl;
	}
private:

};


void test(){
	B b1;
	b1.b = 1;
	b1.getBb();

	//同名变量
	b1.A::b = 100;
	b1.B::b = 200;
	b1.getAb();
	b1.getBb();
	
	//同名函数
	b1.A::get();
	b1.B::get();

}

void main(){

 
	test();
	cout << "hello" << endl;

	system("pause");
	return;
}


/*主文件-------------------------------------------------------*/
#define _CRT_SECURE_NO_WARNINGS
#include "iostream"
using namespace std;
 
class Base1
{
public:
	Base1(int b1){
		this->b1 = b1;
	}
	~Base1(){

	}
	void printB1(){
		cout << "B.b1:" << this->b1 << endl;
	}
private:
	int b1;
};

class Base2
{
public:
	Base2(int b2){
		this->b2 = b2;
	}
	~Base2(){

	}
	void printB2(){
		cout << "B.b2:" << this->b2 << endl;
	}
private:
	int b2;
};

class B :public Base1, public Base2
{
public:
	B(int b1, int b2, int c) : Base1(b1), Base2(b2){
			this->c = c;
	}
	~B(){

	}
	void printC(){
		cout << "C.c:" << this->c << endl;
	}
private:
	int c;

};

void test(){
	B b1(1, 2, 3);
	b1.printB1();
	b1.printB2();
	b1.printC();
}

void main(){

 
	test();
	cout << "hello" << endl << endl << endl << endl << endl;

	system("pause");
	return;
}


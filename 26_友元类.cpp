#define _CRT_SECURE_NO_WARNINGS
#include "iostream"
#include "classArray.h"
using namespace std;
 
class A{
public:
	friend class B;
 	A(int a, int b){
		this->a = a;
		this->b = b;
	}
	int getA()
	{
		return this->a;
	}
private:
	int a;
	int b;
};

class B{
public:
	B(int _b) :Aobject(1,2){
		this->b = _b;
	}
	void setB(int _a, int _b){
		Aobject.a = _a;
		Aobject.b = _b;
	}
	void printB(){
		cout << Aobject.a << endl;
		cout << Aobject.b << endl;
	}
private:
	A Aobject;
	int b;
};
 


void main(){

	B b1(1);
	b1.setB(300,1000);
	b1.printB();
 

	system("pause");
	return;
}

 
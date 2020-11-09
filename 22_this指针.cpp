#define _CRT_SECURE_NO_WARNINGS
#include "iostream"
using namespace std;
 
class Ctest{
public:
	/*
	函数实际原型是：const void opVar(Ctest* const this, int Ctest_a)
	效果：不能改变this指针的指向（指针常量）
	*/
	Ctest(int Ctest_a){
		this->Ctest_a = Ctest_a;
		cout << "Ctest" << endl;
	}
	~Ctest(){
		cout << "~Ctest" << endl;
	}

	/*
	const 修饰的是：this指针
	函数实际原型是：const void opVar(const Ctest* const this, int Ctest_a)
	效果：不能改变this指针的指向，也不通过this指针改变this指针所指向的内容 （指针常量+常量指针=指向常量的常量指针）
	*/
	const void opVar(int Ctest_a){
		cout << this->Ctest_a << endl;
	}
 
private:
	int Ctest_a;
};
 

void test(){
	Ctest x1(3);
}
void main(){
 
	test();
 
 

 

	system("pause");
	return;
}
#define _CRT_SECURE_NO_WARNINGS
#include "iostream"
using namespace std;
 
class Ctest{
public:
	Ctest(int _a){
		Ctest_a = _a;
		cout << "Ctest" << endl;
	}
	~Ctest(){
		cout << Ctest_a << endl;
		cout << "~Ctest" << endl;
	}
	void addC(){
		Ctest_b++;
	}
	static void printCtest_bStatic(){//定义static成员函数
		//cout << "Ctest_b:" << Ctest_a << endl;//报错，原因：调用了类的非static变量
		cout << "Ctest_b:" << Ctest_b << endl;
	}
private:
	int Ctest_a;
	static int Ctest_b;//定义类中所有对象公用的变量
};
 
int Ctest::Ctest_b = 10;//初始化定义类中所有对象公用的变量，注意：类型在最前面

void main(){
 
	Ctest x3(3);
 
	x3.printCtest_bStatic();//调用类中static类型成员函数方法1
	Ctest::printCtest_bStatic();//调用类中static类型成员函数方法1

 

	system("pause");
	return;
}
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
	void printCtest_b(){
		cout << "Ctest_b:" << Ctest_b << endl;
	}
	void addC(){
		Ctest_b++;
	}
private:
	int Ctest_a;
	static int Ctest_b;//定义类中所有对象公用的变量，用sizeof求类大小时，不包含该static类型变量的大小
};
 
int Ctest::Ctest_b = 10;//初始化定义类中所有对象公用的变量

void main(){
    
	
	Ctest x1(1), x2(2),x3(3);
	x1.printCtest_b();
	x2.addC();
	x3.printCtest_b();


 

	system("pause");
	return;
}
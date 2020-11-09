#define _CRT_SECURE_NO_WARNINGS
#include "iostream"
using namespace std;
 
class A{
public:
	A(int _a) :A_a2(20){//类中const属性的初始化方式
		A_a1 = _a;
	}
public:
	int A_a1;
	const int A_a2;
};

 

void main(){
	A A_A1(10);

	printf("%d\n", A_A1.A_a1);
	printf("%d\n", A_A1.A_a2);


 

	system("pause");
	return;
}
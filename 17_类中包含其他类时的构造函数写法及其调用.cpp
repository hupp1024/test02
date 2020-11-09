#define _CRT_SECURE_NO_WARNINGS
#include "iostream"
using namespace std;
 
class A{
public:
	A(int _a){
		A_a1 = _a;
	}
public:
	int A_a1;
};

class B{
public:
	B() :A_A1(1), A_A2(2){//1 固定A和B类的初始化值
		B_b1 = 1;
		B_b2 = 2;
	}

	//B(int _A_A1_a1, int _A_A2_a1) :A_A1(_A_A1_a1), A_A2(_A_A2_a1){//1.2 固定B类初始化值
	//	B_b1 = 1;
	//	B_b2 = 2;
	//}

	//这个函数与函数1.2不能同时编译通过，存在二义性
	B(int _B_b1, int _B_b2):A_A1(1),A_A2(2){//2 固定A类初始化值
		B_b1 = _B_b1;
		B_b2 = _B_b2;
	}



	B(int _B_b1, int _B_b2, int _A_A1_a1, int _A_A2_a1) :A_A1(_A_A1_a1), A_A2(_A_A2_a1){//3 不固定A类和B类初始化值
		B_b1 = _B_b1;
		B_b2 = _B_b2;
	}

	//拷贝构造函数后面添加语句“:A_A1(_A_A1_a1), A_A2(_A_A2_a1)没有意义
	//因为既然是拷贝，就是赋值原对象的所有属性，而不需要也不能再改变原对象的属性



	void getB()
	{
		printf("B_b1:%d\n", B_b1);
		printf("B_b2:%d\n", B_b2);
		printf("A_A1.A_a1:%d\n", A_A1.A_a1);
		printf("A_A2.A_a1:%d\n", A_A2.A_a1);
		printf("\n\n");
	}
private:
	int B_b1;
	int B_b2;
	A A_A1;
	A A_A2;
};

void main(){
	A A_A1(10);

	//B B_B1;//报错 
	/*
	 原因：没有合适的构造函数-->B类中包含了A类，但只有A类有自定义的构造函数（有参构造函数）
		   需要在B类中自定义三种构造函数时按如下格式：
		   1、B(int _B_b1, int _B_b2):A_A1(1),A_A2(2)
		   2、B(int _B_b1, int _B_b2, int _A_A1_a1, int _A_A2_a1) :A_A1(_A_A1_a1), A_A2(_A_A2_a1)
	*/
	B B_B1; //1
	B_B1.getB();

	B B_B2(1,2); //2
	B_B2.getB();

	B B_B4(1, 2, 3, 4); //3
	B_B4.getB();


	/*
		构造函数的调用顺序：
			先执行的是B类所包含的A类的构造函数，
			在所包含的A类中，执行的顺序与在B类中的定义顺序一致，而与语句"...:A_A1(1),A_A2(2)"的无关
		析构函数的调用顺序：
			与构造函数的调用顺序相反
	*/

	system("pause");
	return;
}
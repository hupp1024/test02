#include "iostream"
using namespace std;
/*
  赋值构造函数的调用时机：
   1、Test t2 = t0;
   2、Test t2(t0);
   3、myFunc1(t0);//实参初始化形参
   4、Test t3 = myFunc2();//返回了一个新的匿名对象初始化t3
*/
class Test{
public:
	Test(int a, int b){
		m_a = a;
		m_b = b;
	}

	Test(const Test& obj){
		m_a = obj.m_a;
		m_b = obj.m_b;
	}
public:
	int m_a;
	int m_b;
};

void myFunc1(Test& p){
	cout << p.m_a << endl;
	cout << p.m_b << endl;
}

Test myFunc2(){
	Test _t(3, 4);
	return _t;//
}

void test(){
	Test t0(1, 2);
	Test t4(4, 4);

	Test t1 = t0;//1
	Test t2(t0);//2
	myFunc1(t0);//3
	Test t3 = myFunc2();//4：初始化语句中，返回了一个匿名对象且不会被析构直接“转”成了 t3，myFunc2中调用了赋值构造函数，并且析构了"_t"对象，不返回_t的原因：局部变量
	
	t4 = myFunc2();//4：赋值语句中，匿名对象会被析构

}


void main(){
	test();

 
	system("pause");
	return;
}
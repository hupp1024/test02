#include "iostream"
using namespace std;
 /*
  构造函数的分类：
   1、无参构造函数
   2、有参构造函数
   3、赋值构造函数:用一个对象初始化另一个对象，与上面两种的区别：形参类型是“类”本身
   /*/
class Test{
public:
	Test(){ //1
		m_a = 0;
		m_b = 0;
	}

	Test(int a, int b){ //2
		m_a = a;
		m_b = b;
	}

	Test(const Test& obj){//3
		m_a = obj.m_a;
		m_b = obj.m_b;
	}
public:
	int m_a;
	int m_b;
};

void test(){
	//调用无参构造函数
		Test t1;
	
	//三种调用带参构造函数的方法：
		Test t2(1, 2);//方法1（最常用）
		//Test t3 = (1);//方法2，适用于只有一个参数的构造函数
		Test t3 = Test(1, 2);//方法3，语句"Test(1, 2)做右值"会产生一个匿名对象，去留取决于"左值"
	//调用赋值构造函数
		Test t4 = t2;



		printf("t1.m_a:%d\n", t1.m_a);
		printf("t1.m_b:%d\n", t1.m_b);

		printf("t2.m_a:%d\n", t2.m_a);
		printf("t2.m_b:%d\n", t2.m_b);

		printf("t3.m_a:%d\n", t3.m_a);
		printf("t3.m_a:%d\n", t3.m_b);

		printf("t4.m_a:%d\n", t4.m_a);
		printf("t5.m_a:%d\n", t4.m_b);
}
void main(){
	test();

 
	system("pause");
	return;
}
#include "iostream"
using namespace std;
/*
  ��ֵ���캯���ĵ���ʱ����
   1��Test t2 = t0;
   2��Test t2(t0);
   3��myFunc1(t0);//ʵ�γ�ʼ���β�
   4��Test t3 = myFunc2();//������һ���µ����������ʼ��t3
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
	Test t3 = myFunc2();//4����ʼ������У�������һ�����������Ҳ��ᱻ����ֱ�ӡ�ת������ t3��myFunc2�е����˸�ֵ���캯��������������"_t"���󣬲�����_t��ԭ�򣺾ֲ�����
	
	t4 = myFunc2();//4����ֵ����У���������ᱻ����

}


void main(){
	test();

 
	system("pause");
	return;
}
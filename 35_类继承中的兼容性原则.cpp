///*���ļ�-------------------------------------------------------*/
//#define _CRT_SECURE_NO_WARNINGS
//#include "iostream"
//using namespace std;
// 
//class Parent
//{
//public:
//	Parent(int a = 0){
//		this->a = a;
//	}
//	 virtual void print(){
//		cout << "Parent" << endl;
//	}
//protected:
//private:
//	int a;
//};
//
//class Child :public Parent
//{
//public:
//	Child(int a = 0, int b = 0):Parent(a){
//		this->b = b;
//	}
//	void print(){
//		cout << "Child" << endl;
//	}
//protected:
//private:
//	int b;
//};
//
//void HowToPlay(Parent* base){
//	base->print();
//}
//
//void test(){
//	Parent p1;
//	Child c1; 
//
//	HowToPlay(&p1);
//	HowToPlay(&c1);
//}
//
//void main(){
//	 
//	test();
//	system("pause");
//	return;
//}
//

/*���ļ�-------------------------------------------------------*/
#define _CRT_SECURE_NO_WARNINGS
#include "iostream"
using namespace std;
/*
������ԭ��
1�������������Ե��������ʹ��
2�������������Ը�ֵ���������
3�������������Գ�ʼ���������
4������ָ�����ָ�����������
5���������ÿ����������������
*/
class Parent{
public:

	Parent(){//�޲ι���
		cout << "Parent's construct functiong" << endl;
	}
	Parent(const Parent& obj){//��������
		cout << "Parent's copy functiong" << endl;
	}
	void printP(){
		cout << "Im's father" << endl;
	}
	int x1;
protected:

private:
	int a;
};
class Child :public Parent{
public:
	void printC(){
		cout << "Im's son" << endl;
	}
	int y1;
protected:
private:
	int c;
};
void howToPrint(Parent* base){
	base->printP();
}
void howToPrint2(Parent& base){
	base.printP();
}
void test(){
	Parent parent;
	parent.printP();
	//����
	Child child;
	child.printC();
	child.printP();
	//4������ָ�����ָ�����������,Ҳ�� pParent = &child;
	Parent* pParent = NULL;
	pParent = &child;
	pParent->printP();
	pParent->x1;
	//pParent->y1;//error;
	//4-1��������ָ�������ָ���Ч
	howToPrint(&parent);
	howToPrint(&child);
	//5���������ÿ����������������
	howToPrint2(parent);
	howToPrint2(child);
	//3�������������Գ�ʼ���������
	Parent parent2 = child;//���û��࿽�����캯��
 

}

void main(){


	test();
	cout << "hello" << endl;

	system("pause");
	return;
}


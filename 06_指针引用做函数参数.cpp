#include "iostream"
using namespace std;
struct Teacher{
	char name[4];
	int age;
};

//int getTeacher1(Teacher** p){
//	if (NULL == p){
//		return -1;
//	}
//	Teacher* tmp = (Teacher*)malloc(sizeof(Teacher));
//	if (NULL == tmp){
//		return -2;
//	}
//	tmp->age = 33;
//	*p = tmp;
//}
int getTeacher2(Teacher*& p){ 
	//调用的本质：Teacher* const *p = &pT1,
	//也即p是一个二级指针常量，p的“指向”不能改变，但是“指内”可以改变，故能初始化“指内”
	p = (Teacher*)malloc(sizeof(Teacher));
	if (NULL == p){
		return -1;
	}
	p->age = 33;
 
}
void main(){
	Teacher* pT1 = NULL;
	
	//C语言方法：
	//getTeacher1(&pT1);
	//cout << pT1->age << endl;

	//C++方法：
	getTeacher2(pT1);//调用的本质：&pT1，“&pT1”操作由C++编译器自动完成 
	cout << pT1->age << endl;

	//本质猜想：
	/*
		本质上与getTeacher1函数（C语言）的实现原理一致，
		主调函数中对一级指针取地址和被调函数参数设为二级指针，
		都由C++编译器自动完成的。
	*/

	//验证本质猜想：
	int a = 10;
	int b = 20;
	int* p1 = &a;
	int* const *p2 = &p1;

	printf("%d\n", a);
	printf("%d\n", *p1);
	printf("%d\n", **p2);

	**p2 = 30;
	printf("%d\n", a);
	printf("%d\n", *p1);
	printf("%d\n", **p2);

	system("pause");
	return;
}
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
	//���õı��ʣ�Teacher* const *p = &pT1,
	//Ҳ��p��һ������ָ�볣����p�ġ�ָ�򡱲��ܸı䣬���ǡ�ָ�ڡ����Ըı䣬���ܳ�ʼ����ָ�ڡ�
	p = (Teacher*)malloc(sizeof(Teacher));
	if (NULL == p){
		return -1;
	}
	p->age = 33;
 
}
void main(){
	Teacher* pT1 = NULL;
	
	//C���Է�����
	//getTeacher1(&pT1);
	//cout << pT1->age << endl;

	//C++������
	getTeacher2(pT1);//���õı��ʣ�&pT1����&pT1��������C++�������Զ���� 
	cout << pT1->age << endl;

	//���ʲ��룺
	/*
		��������getTeacher1������C���ԣ���ʵ��ԭ��һ�£�
		���������ж�һ��ָ��ȡ��ַ�ͱ�������������Ϊ����ָ�룬
		����C++�������Զ���ɵġ�
	*/

	//��֤���ʲ��룺
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
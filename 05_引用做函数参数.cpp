#include "iostream"
using namespace std;
 

struct Teacher
{
	char name[4];
	int age;
};

 

//pT��t1�ı���  
void printfT2(Teacher &pT)//����ʱ�ı��ʡ�Teacher const *pT = &t1
{
	cout<<pT.age<<endl;
	pT.age = 3;//�޸���Ч
}

 
void main()
{
	Teacher t1;
	t1.age = 1;
	t1.name[0] = 'a';
	t1.name[1] = 'b';
	t1.name[2] = 'c';
	t1.name[3] = 'd';

 

	printfT2(t1);//����ʱ�ı��ʡ�Teacher const *pT = &t1 ����&t1��������C++�������Զ���� 
	printf("t1.age:%d \n", t1.age);  

 

	cout << "hello..." << endl;
	system("pause");
	return;
}

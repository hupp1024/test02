#include "iostream"
using namespace std;
struct Teacher{
	char name[4];
	int age;
};


void main(){
	int x = 20;
	//�����õĳ�ʼ��(1)��������ʼ��������
	const int& y = x;//���ʣ�const int const *y = &x;
	//y = 100;//����-->ԭ��ֻ�ܶ���y�������ܡ�д��y��ʹ��y���С�ֻ��������

	
	const int a = 40;//���ű����
	//int& b = 40;//����-->ԭ�򣺱����ǣ�int const *b = &41,������������41û���ڴ��ַ��
	
	//�����õĳ�ʼ��(2)��������������ʼ��������
	const int& m = 40;//�ɹ�-->ԭ�򣺹涨������

	system("pause");
	return;
}
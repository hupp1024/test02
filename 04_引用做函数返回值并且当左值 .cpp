#include "iostream"
using namespace std;
 
int& getAA()
{
	static int a = 10;
	a++;
	printf("getAA a:%d\n", a);
	return a;
}

void main(){
 
	//����������������ֵ�����Զ������и�ֵ��
	getAA()= 100;//���ʣ�*a = 100;
	getAA();
	system("pause");
	return;
}  